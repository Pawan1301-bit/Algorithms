//counting sort -- is a non comparision based , stable  sorting effective when there is very less number of elemenets
// stable sorting -- relative order of equal elements are maintained

#include<bits/stdc++.h>

using namespace std;

void count_sort(vector<int> &input){
    int n = input.size();
    //first finding the largest element:::
    int m = *max_element(input.begin() , input.end());

    //creating an new array of length max+1 to store the count of the numbers:::
    vector<int> count(m+1 , 0);
    //now storing the count of elements :::
    for(int i=0; i<n ; i++){
        count[input[i]]++;
    }
    //storing the prefix sum that will help in maintaing there relative order -- for stable sort:::
    for(int i=1 ; i <= m; i++){
        count[i] += count[i-1];
    }

    //now creating the ouput vector and storing elements in them:::
    vector<int>output(n);
    for(int i=n-1; i>=0; i--){
        output[count[input[i]]-1] = input[i];
        count[input[i]]--;
    }

    cout << "sorted array : ";
    for(int i=0; i<output.size(); i++){
        cout << output[i] << ", ";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> input = {2,5,3,0,2,3,0,3};
    count_sort(input);

    return 0;
}
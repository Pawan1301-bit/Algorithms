//bubble sort -- comparing the adjacent elements then swap them accordingly -- complexity O(n^2) -- average and worst complexity is high not suitable for hight set

#include<bits/stdc++.h>

using namespace std;

void swap(int &a , int &b){
    int temp = a ;
    a = b;
    b = temp;
}

void bubble_sort(vector<int> &nums){
    int n = nums.size();
    int i=0, j=0;
    bool swapping = false;

    while(i < n){
        swapping = true;
        while(j < n-i-1){
            if(nums[j] > nums[j+1]){
                swap(nums[j] , nums[j+1]);
                swapping = true;
            }
            j++;
            }
            if(swapping == false){
                break;
            }
        i++;
    } 
}

void print_element(vector<int> &nums){
    int n  = nums.size();
    cout << "sorted array : ";
    for(int i=0 ; i<n ; i++){
        cout << nums[i] << ", "; 
    }
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,4,2,9,5};
    bubble_sort(nums);
    print_element(nums);
    return 0;
}
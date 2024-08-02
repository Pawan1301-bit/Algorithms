//selection sort -- reapeatly select the smallest and move the to the first -- O(1) space complexity and O(n^2) time complexity in all cases:::
#include<bits/stdc++.h>

using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selection_sort(vector<int> &nums){
    int min_index  = 0;
    for(int i=0 ; i<nums.size()-1 ; i++){
        min_index = i;
        int j = i+1;
        while(j < nums.size()){
            if(nums[j] < nums[min_index]){
                min_index = j;
            }
            j++;
        }

        if(min_index != i){
            swap(nums[min_index] , nums[i]);
        }
    }
}

void print_element(vector<int> &nums){
    int n = nums.size();
    cout << "sorted arry : ";
    for(int i=0 ; i<n ; i++){
        cout << nums[i] <<", ";
    }
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {3,2,5,1,3,4};
    
    selection_sort(nums);
    print_element(nums);

    return 0;
}
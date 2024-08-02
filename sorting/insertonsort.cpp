//insertion sort -- element is picked and placed to its respective position (in sorted order) -- complexity O(n^2):::

#include<bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int> &nums){
    int n = nums.size();
    for(int i=1 ; i<n ; i++){
        int key = nums[i];
        int j = i-1;
        while(j >= 0 && nums[j] > key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

void print_element(vector<int>&nums){
    int n = nums.size();
    cout << "sorted arry : ";
    for(int i=0 ; i<n ; i++){
        cout << nums[i] <<", ";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {5,1,3,2,4};
    insertion_sort(nums);
    print_element(nums);
    return 0;
}
//qucik sort -- based on divide and conquere we take an pivot element(last element) and partition the array around the pivot element by placing the pivot element on its correct position -- one of the most efficient algorithm -- worst case -- O(n^2) and average case -- O(nlogn):::

#include<bits/stdc++.h>

using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b =temp;
}

int partition(vector<int>&nums , int low , int high){
    int pivot = nums[high];
    int i = low-1;

    for(int j=low ; j<=high ; j++){
        if(pivot > nums[j]){
            i++;
            swap(nums[i] , nums[j]);
        }
    }
    swap(nums[i+1] , nums[high]);
    return i+1;
}

void quick_sort(vector<int>&nums , int low , int high){
    if(low < high){
        int pi = partition(nums , low , high);

        quick_sort(nums , 0, pi-1);
        quick_sort(nums , pi+1, high);
    }
}

void print_element(vector<int>&nums){
    cout << "sorted array : ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << ", ";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>nums = {6,18,3,21,13};
    quick_sort(nums , 0 , 4);
    print_element(nums);
    return 0;
}
//jump search -- in an sorted array we divide the array in different groups and then find the group where we can find the element and perform linear search there -- time complexity -- O(n^1/2) avg and worst and O(1) best case and space complexity -- O(1):::

#include<bits/stdc++.h>

using namespace std;

int jump_sort(vector<int> &nums , int target){
    int n = nums.size();
    int prev = 0;

    //finding the steps:::
    int step = sqrt(n);

    //finding the block:::
    while(target > nums[min(step,n)-1]){
        prev = step;
        step += sqrt(n);
        if(prev >= n){
            return -1;
        }
    }

    //appling liner search algorithm on block:::
    while(target > nums[prev]){
        prev++;

        if(nums[prev] == min(step,n)){
            return -1;
        }
    }
    if(nums[prev] == target){
        return prev+1;
    }
    return -1;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };

    int res = jump_sort(nums, 55);
    (res == -1) ?cout<< "element not found":cout<<"element found at : "<<res;

    return 0;
}

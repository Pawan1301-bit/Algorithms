//heap sort -- comparision based sorting technique based on binary heap data structure it first select the smallest element locate it -- time complexity O(nlogn) in all cases -- O(1) space complexity 
#include<bits/stdc++.h>

using namespace std;

void heap_sort(vector<int> &nums){
    int n = nums.size();
    //building heap -- rearranging element:::
    for(int i = n/2-1 ; i>=0 ; i--){

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
    
    heap_sort(nums);
    print_element(nums);

    return 0;
}
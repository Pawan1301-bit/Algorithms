//binary search -- divide the array into 2 halfs and then search -- only for sorted arrays -- time complexity -- O(logn) space complexity -- O(1):::
#include<bits/stdc++.h>

using namespace std;

int binary_search(vector<int> &arr , int target){
    int n = arr.size();
    int first = 0 , last = n-1;
    while(first < last){
        int mid = first + (last-first )/2;
        if(arr[mid] == target)  return mid+1;
        else if(arr[mid] > target){
            last = mid-1;
        }else{
            first = mid +1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = binary_search(arr , 7);
    (res == -1) ? cout << "Element not found" : cout << "element found at postition : " << res;
    return 0;
}

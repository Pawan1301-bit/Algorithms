//binary search using reccursion::

#include<bits/stdc++.h>

using namespace std;

int binary_search(vector<int> &arr , int first , int last , int target){
    if(first <= last){
    int mid  = first+(last-first)/2;

    if(arr[mid] ==  target) {
        return mid+1;
    }else if(arr[mid] > target) {
        return binary_search(arr ,first , mid-1 , target );
    }else{
        return binary_search(arr , mid+1 , last , target );
    }
}
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = binary_search(arr , 0, 9 , 11);
    (res == -1) ? cout << "Element not found" : cout << "element found at postition : " << res;
    return 0;
}
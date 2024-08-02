//linear search -- check every element one by one -- time complexity O(n) for all cases and O(1) space complexity:::

#include<bits/stdc++.h>

using namespace std;

int linear_search(vector<int> &arr , int target){
    for(int i=0; i<arr.size() ; i++){
        if(arr[i] == target){
            return i+1;
        }
    }
    return -1;
}

int main(){
  
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);

    vector<int> arr = {1,2,3,4,5};
    int result = linear_search(arr, 6);

    (result == -1) ? cout << "Element not found" : cout << "element found at : "<< result;
    return 0;
}
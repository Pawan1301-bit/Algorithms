//merge sort -- stable sorting -- divide the array into smaller parts sort them and at last merge them togethar -- efficent for large datasets --complexity O(nlogn) constant for all the cases and space complexity is O(n):::
#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums , int first , int mid , int last){
        int n1 = mid -first+1;
        int n2 = last-mid;

        //creating 2 temproray arrays
        vector<int>leftarray(n1);
        vector<int>rightarray(n2);

        //copying the data into this subarrays
        for(int i=0; i<n1; i++){
            leftarray[i] = nums[first + i];
        }
        for(int j=0; j<n2; j++){
            rightarray[j] = nums[mid + j + 1];
        }

        //merging the 2 arrays togethar in sorted order:::
        int i=0, j=0 , k =first;

        while(i<n1 && j<n2){
            if(leftarray[i] <= rightarray[j]){
                nums[k] = leftarray[i];
                i++;
            }else{
                nums[k] = rightarray[j];
                j++;
            }
            k++;
        }

        //merging the remaining elements:::
        while(i < n1){
            nums[k] = leftarray[i];
            i++,k++;
        }
        while(j < n2){
            nums[k] = rightarray[j];
            j++,k++;
        }
}

void merge_sort(vector<int> &nums , int first , int last){
   if(first < last){
    //finding the middle element;
    int mid = first + (last-first)/2;

    //reccurively breaking the array into sorter parts
    merge_sort(nums, first , mid);
    merge_sort(nums, mid+1 , last );

    //joining all parts togethar
    merge(nums , first , mid , last);
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

    vector<int> nums = {2,44,12,5,30};
    merge_sort(nums , 0 , 4);

    print_element(nums);

    return 0;
}

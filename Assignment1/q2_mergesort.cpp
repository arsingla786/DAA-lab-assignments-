
/*Merge Sort is a divide-and-conquer algorithm.
It divides the array into halves, 
recursively sorts each half, 
and then merges them back together in sorted order.*/

/*Implement Merge sort for the given array int 
arr[] = {12, 11, 13, 5, 6, 7}. After implementing
Merge Sort, apply the same implementation to sort another array: 
int arr2[] = {38, 27, 43,
3, 9, 82, 10}.
*/
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low,int mid, int high){
  
  vector<int> ans;
  int left = low;
  int right = mid+1;
  
    while(left<=mid && right <=high){
      if(arr[left]<=arr[right]){
        ans.push_back(arr[left]);
        left++;
      }
      else{
        ans.push_back(arr[right]);
        right++;
      }
    }
    //push remaining
    while(left<=mid){
      ans.push_back(arr[left]);
      left++;
    }
    while(right<=high){
      ans.push_back(arr[right]);
      right++;
    }
    //update the array 
    for(int i=low;i<=high;i++){
      arr[i] = ans[i-low];
    }
    
}


void mergeSort(vector<int>& arr, int low, int high){
  if(low<high){
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}


int main() 
{
    vector<int> arr =  {12, 11, 13, 5, 6, 7};
        int low = 0;
        int high = arr.size()-1;
        
     mergeSort(arr,low,high);
    for(auto i:arr){
      cout<<i<<" ";
    }
}

//output1 -> 5 6 7 11 12 13 
//output2 -> 3 9 10 27 38 43 82 

//TC - O(nlogN)
//SC - O(n)


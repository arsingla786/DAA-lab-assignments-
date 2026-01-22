/*Consider an array arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91} 
and use Binary Search to find
the target 23.*/

#include<bits/stdc++.h>

using namespace std;
int BS(vector<int> arr,int k){
    int l = 0;
    int r = arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int k = 23;
    cout<<BS(arr,k);
}

//output -> 5
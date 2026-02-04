/*
You are given an array A consisting of N integers.
A subsequence of the array is called
good if every pair of elements in the subsequence
have an absolute difference of at most
Determine the maximum possible length of a good subsequence
*/
#include <iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& ds, int val) {

    for (int x : ds) {
        if (abs(x - val) > 10)
            return false;
    }
    return true;
}
void subsequence(int i,int n,vector<int>& arr,vector<vector<int>>& ans, vector<int>& ds){
  
    if(i==n){
      ans.push_back(ds);
      return;
    }
  //pick if abs diff is valid
  if(isValid(ds,arr[i])){
    ds.push_back(arr[i]);
    subsequence(i+1,n,arr,ans,ds);
    ds.pop_back();
  }
  subsequence(i+1,n,arr,ans,ds);
    
}


int main() 
{
    vector<int> arr = {10,12,21,24,30};
    vector<vector<int>> ans;
    vector<int> ds;
    subsequence(0,arr.size(),arr,ans,ds);
    int max_size = -1;
    for(auto it:ans){
    int size = it.size();
    max_size = max(max_size,size);
    for(auto i : it){
      cout<<i<<" ";
    }
    cout<<endl;
    
    }
    cout<<max_size;
}








// #include <iostream>
// #include<vector>
// using namespace std;

// void generate_subarray(int start,int end,vector<int>& arr){
//   if(end == arr.size()) return ;
  
//   for(int i=start;i<=end;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
  
//   generate_subarray(start,end+1,arr);
  
// }
// void subarray_each_index(int start,vector<int>& arr){
  
//   if(start == arr.size()) return ;
  
//   //generate sub array for each index 
//   generate_subarray(start,start,arr);
  
//   //next index 
//   subarray_each_index(start+1,arr);
  
// }


// int main() 
// {
//     vector<int> arr = {10,12,21,24,30,40,50,60};
//     subarray_each_index(0,arr);
    
// }

//after all operation only last 2 greatest elemnts remain
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,3,2,4};

    sort(arr.begin(), arr.end());
int n  = arr.size();
    int  ans = arr[n-1] + arr[n-2];

    cout <<"sum of remaining elements  = "<<ans << endl;

    return 0;
}



























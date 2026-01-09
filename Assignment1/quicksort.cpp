#include<iostream>
#include<vector>

using namespace std;
int pivotIdx(vector<int>& arr,int p,int r){
    int i  = p-1;
    int pivot = r;
    int j;
    for(j = p;j<r;j++){
        if(arr[j]<=arr[pivot]){
            i++; 
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[r],arr[j+1]);
    return j;
}

void quicksort(vector<int>& arr,int p,int r){
    if(p>r){
       int pvt = pivotIdx(arr,p,r);
       quicksort(arr,p,pvt-1);
       quicksort(arr,pvt+1,r); 
    }

}

int main(){
    vector<int> arr = {4,5,7,0,8,2,1};
    quicksort(arr,0,arr.size());
    for(auto it : arr){
        cout<<it<<" ";
    }
}



/*You are given a 1D array that may contain both positive 
and negative integers,and find
the sum of a contiguous subarray of numbers which has the
largest sum. For example, if
the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the 
maximum subarray sum is 7.*/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, -5, 6, -2, -3, 1, 5, -6};
    cout << maxSubArray(nums);
}










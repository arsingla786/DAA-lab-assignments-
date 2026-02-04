#include <iostream>
#include <vector>
using namespace std;

// Generate subarrays starting from 'start'
void generate_subarray(int start, int end,
                       vector<int>& arr,
                       vector<bool>& special,
                       int k)
{
    if (end == arr.size())
        return;

    // For every element A[l]
    for (int i = 0; i < arr.size(); i++) {

        int count = 0;

        // Count elements > arr[i] in subarray start..end
        for (int j = start; j <= end; j++) {

            if (arr[j] > arr[i])
                count++;
        }

        // Check after counting
        if (count == k) {
            special[i] = true;   // mark as special
        }
    }

    // Extend subarray
    generate_subarray(start, end + 1, arr, special, k);
}


// For each starting index
void subarray_each_index(int start,
                         vector<int>& arr,
                         vector<bool>& special,
                         int k)
{
    if (start == arr.size())
        return;

    // Generate all subarrays starting at start
    generate_subarray(start, start, arr, special, k);

    // Move to next start
    subarray_each_index(start + 1, arr, special, k);
}


int main()
{
    vector<int> arr = {10,12,21,24,30,40,50,60};
    int k = 3;

    int n = arr.size();

    // Track special elements
    vector<bool> special(n, false);

    subarray_each_index(0, arr, special, k);

    int specialty = 0;

    cout << "Special elements: ";

    for (int i = 0; i < n; i++) {

        if (special[i]) {
            cout << arr[i] << " ";
            specialty += arr[i];
        }
    }

    cout << "\nSpecialty = " << specialty << endl;

    return 0;
}

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
public:
    // Function to merge two sorted arrays and count inversions
    long long mergeAndCount(long long arr[], long long temp[], int left, int mid, int right) {
        int i = left;      // Index for the left subarray
        int j = mid + 1;   // Index for the right subarray
        int k = left;      // Index for the merged array
        long long count = 0;
        
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                count += mid - i + 1;  // Count the inversions
            }
        }
        
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        
        while (j <= right) {
            temp[k++] = arr[j++];
        }
        
        for (int p = left; p <= right; p++) {
            arr[p] = temp[p];
        }
        
        return count;
    }
    
    // Function to divide the array into subarrays and merge them
    long long mergeSortAndCount(long long arr[], long long temp[], int left, int right) {
        long long count = 0;
        
        if (left < right) {
            int mid = (left + right) / 2;
            
            count += mergeSortAndCount(arr, temp, left, mid);          // Count inversions in the left subarray
            count += mergeSortAndCount(arr, temp, mid + 1, right);     // Count inversions in the right subarray
            count += mergeAndCount(arr, temp, left, mid, right);       // Merge two sorted subarrays and count inversions
        }
        
        return count;
    }
    
    // Function to count inversions in the array using Merge Sort
    long long int inversionCount(long long arr[], long long N) {
        long long temp[N];
        return mergeSortAndCount(arr, temp, 0, N - 1);
    }
};





//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
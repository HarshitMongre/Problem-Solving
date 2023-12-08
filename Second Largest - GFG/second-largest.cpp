//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
private:
   int findLargest(int arr[], int n){
       int ans = -1;
       for(int i=0; i<n; i++){
           if(arr[i] > ans) ans = arr[i];
       }
       
       return ans;
   }
   
   int secondLargest(int arr[], int n){
       int largest = findLargest(arr, n);
       
       for(int i=0; i<n; i++){
           if(arr[i] == largest) arr[i]  = -1;
       }
       
       return findLargest(arr, n);
   }
   
   
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    return secondLargest(arr, n);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        //   sort(arr , arr+n);
        
        int s= 0, e = n-1;
        while(s<e){
            if(arr[s] == 1 && arr[e] == 0){
                swap(arr[s] , arr[e]);
                s++;
                e--;
            }
            
            if(arr[s] == 0){
                s++;
            }
            
            if(arr[e] == 1){
                e--;
            }
        }
        
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
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
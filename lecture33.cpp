#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int n){
    bool ans = true;
    if(n == 0 || n == 1) return true;
    if(arr[0] > arr[1]) return false;
    else{
         ans = isSorted(arr+1, n-1);
    }
    return ans;
}

// 
int sumOfArrayElement(int *arr, int n){

    if(n==1) return arr[0];
    if(n==0) return 0;
    int remainingPart = sumOfArrayElement(arr+1, n-1);
    int sum = arr[0] + remainingPart;

    return sum;
}

bool linearSearch(int *arr, int n, int target){
    bool ans = true;
    if(n==0) return false;
    if(arr[0] == target) return true;
    else{
       ans = linearSearch(arr+1,n-1,target);
    }
    return ans;
}

int binarySearch(int *arr, int s, int e, int target){
    int ans = -1;
    if(s>e) return -1;
    int mid = s + (e-s)/2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) {
        ans = binarySearch(arr,mid+1,e,target);
    }
    else{
        ans = binarySearch(arr,s,mid-1,target);
    }

    return ans;

}
int main(){
    // isSorted?
    int arr[] = {1,2,3,4,5,6,7};
    // bool ans = isSorted(arr,7);
    // if(ans) cout << "sorted";
    // else cout << "Unsorted";

    // int ans = sumOfArrayElement(arr,7);
    // cout << ans << endl;

    // linearSearch :
    // bool ans = linearSearch(arr,7,1);
    // if(ans) cout << "present";
    // else cout << "absent";

    // binary :
    int ans = binarySearch(arr, 0, 6, 11);
    cout << "ans is: " << ans;
}
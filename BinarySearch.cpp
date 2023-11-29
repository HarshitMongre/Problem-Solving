#include<bits/stdc++.h>
using namespace std;
// binary search :
int binarySearch(int *arr, int n, int target){
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) lo = mid+1;
        else hi = mid-1;
    }

    return -1;

}

// Smallest Missing number :
int smallestMissingNo(int *arr, int n){
    int lo = 0;
    int hi = n-1;
    int ans = n;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] != mid){
            ans = mid;
            hi = mid-1;

        }
        else{
            lo = mid+1;
        }
    }

    return ans;
}

// first occurance: 

int firstOcc(int *arr, int n, int target){
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == target) {
            if(mid>0 && arr[mid] == arr[mid-1]){
                return mid-1;
            }
            else {
                return mid;
            }

        }
        else if(arr[mid] < target) lo = mid+1;
        else hi = mid-1;
    }
}
int main(){
    // binary search
    // int arr[6] = {2,3,5,6,8,9};
    // int target = 10;

    // int ans = binarySearch(arr,6,target);
    // cout << "ans is: " << ans;


    // Smallest Missing number :

    // int arr[7] = {0,1,2,3,4,5,6};
    // int ans = smallestMissingNo(arr,7);
    // cout << "ans is: " << ans << endl;



    // firstOcc :
    int arr[7] = {1,2,3,3,4,4,5};
    int ans = firstOcc(arr,7,4);
    cout <<"ans is: " << ans << endl;

}
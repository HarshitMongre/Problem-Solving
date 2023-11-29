#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    return sum;
}

int main(){
 
 // dynamic array declaration / dynamic memory allocation : 
 int n;
 cout << "enter n: ";
 cin >> n;
 int *arr = new int[n];

cout << "enter array elements: " << endl;
 for(int i=0; i<n; i++){
    cin >> arr[i];
 }

  int ans = sumOfArray(arr, n);
  cout << "sum is: " << ans;

}
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    int ans = n * factorial(n-1);
    return ans;
}


int powerOf2(int n){
    if(n==0) return 1;
    int ans = 2 * powerOf2(n-1);

    return ans;
}

void count(int n){
    if(n==0) return;
    count(n-1);
    cout << n << " ";
}

void reverseCount(int n){
    if(n==0) return;
    cout << n << " ";
    count(n-1);
    
}
int main(){
    // factorial program :

    // int n = 6;
    // int ans = factorial(n);
    // cout << ans;

                       //  -- q2.
    // int n = 10;
    // int ans = powerOf2(n);
    // cout << ans;   


                    // counting problem :

    count(5);  
            
                    // reverse counting :
    cout << endl;

    reverseCount(5);

}

// #include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

// Relation : GCD(a,b) == GCD(a-b,b) 
int gcd(int &a,int &b){
    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
int main(){
    int a = 24,b = 72;
    int ans = gcd(a,b);
    cout << ans; 
}
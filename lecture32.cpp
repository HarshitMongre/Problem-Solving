#include<bits/stdc++.h>
using namespace std;
void reachDest(int source, int destination){
    cout << source << " , " << destination << endl;
    if(source == destination){
        cout << "Reached!"<< endl;
        return;
    }

    reachDest(source+1, destination);

}

// Fibonacci series :
int fibonacci(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    int ans = fibonacci(n-1) + fibonacci(n-2);

    return ans;

}

// Nth stair problem :
int nthStair(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    int ans = nthStair(n-1) + nthStair(n-2);

    return ans;

}

// sayDigt :
void sayDigit(int n, string arr[]){
    // base case :
    if(n == 0) return;

    // process :
    int digit  = n % 10;
    n = n/10;

    // recursive call: 
    sayDigit(n,arr);
    cout << arr[digit] << " ";
}
int main(){
    // reaching destination :

    // reachDest(1,10);

                             // nth term of fibonacci series :
    // int ans = fibonacci(5);
    // cout << ans << endl;

                               // NTHsTAIR :

    // int ans1 = nthStair(5);
    // cout << ans1;    


    // sayDigit :
    string ans[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigit(412,ans);
    cout << endl;
    sayDigit(555, ans);


}
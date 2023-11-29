#include<iostream>
using namespace std;
bool isPrime(int num){
    bool isprime = true;
    if(num<=1) return false;
    for(int i=2; i<num; i++){
        if(num%i==0){
            isprime = false;
        }
    }

    return isprime;
}
int main(){
    
    int n = -1;
    if(isPrime(n)){
        cout << "prime number";
    }
    else{
        cout << "no-prime number";
    }
}
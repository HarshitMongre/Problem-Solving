#include<bits/stdc++.h>
using namespace std;
// reverse string using recursion :
void reverseStr(string &st, int s){
    cout << st << " " << endl;
    if(s > st.length()-1-s) return;
    swap(st[s], st[st.length()-1-s]);
    reverseStr(st,s+1);
}
int main(){
    // reverse string:
    string str = "abbabba";
//     cout << str << endl;
   int s = 0;
   int e = str.length()-1;
   string str1 = str;
   while(s<e){
    swap(str[s],str[e]);
    s++;
    e--;
   }

   if(str1 == str){
    cout << "equal";
   }
   else cout << "not equal";

//    cout << str << endl;

//    reverseStr(str,0);
//    cout << str << endl;

//  check palindrom :



}
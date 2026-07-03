#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    while(n>0 && n%7 != 0) n-=4,str.push_back('4');
    while(n>0 && n%7 == 0) n-=7,str.push_back('7');
    if(n == 0) cout<<str;
    else cout<<"-1";
}
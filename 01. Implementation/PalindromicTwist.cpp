#include<bits/stdc++.h>
using namespace std;

bool isTwistedPalindrome(int i,int j, string &str){
    if(i >= j) return true;
    if(!(str[i] == str[j] || abs(str[i] - str[j]) == 2)) return false;
    return isTwistedPalindrome(i+1,j-1,str);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        if(isTwistedPalindrome(0,str.length()-1,str)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
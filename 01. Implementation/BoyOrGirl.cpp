#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    unordered_map<char,bool> mp;
    for(char ch : str) mp[ch] = 1;
    int n = mp.size();
    if(n&1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}
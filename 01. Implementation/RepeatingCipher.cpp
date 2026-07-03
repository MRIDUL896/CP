#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n>>str;
    int i = 0, cnt = 1;
    string decrypted = "";
    while(i < n){
        decrypted += str[i];
        i += cnt;
        cnt++;
    }
    cout<<decrypted;
}
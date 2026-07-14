#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int ans = n/2;
    if(n & 1){
        bool hasAnotherOne = false;
        for(int i=1;i<n;i++){
            if(s[i] == '1'){
                hasAnotherOne = true;
                break;
            }
        }
        if(hasAnotherOne) ans++;
    }
    cout<<ans;
}
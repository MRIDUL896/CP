#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,h;
        cin>>s>>h;
        sort(s.begin(),s.end());
        bool isPoss = false;
        if(s.length() > h.length()){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i = 0;i <= h.length() - s.length(); i++){
            string str = h.substr(i,s.length());
            sort(str.begin(),str.end());
            if(str == s){
                isPoss = true;
                break;
            }
        }
        if(isPoss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
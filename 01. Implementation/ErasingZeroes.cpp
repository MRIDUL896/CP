#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.size();
        int st = -1, end = -1;
        for(int i=0;i<n;i++){
            if(str[i] == '1'){
                st = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(str[i] == '1'){
                end = i;
                break;
            }
        }
        if(st==-1){
            cout<<0<<endl;
            continue;
        }
        int cnt = 0;
        for(int i=st;i<=end;i++){
            if(str[i] == '0') cnt++;
        }
        cout<<cnt<<endl;
    }
}
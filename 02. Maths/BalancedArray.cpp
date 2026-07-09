#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int diff = n/2;
        if(diff & 1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int i = 2, cnt = 0;
        while(cnt < n-1){
            cout<<i<<" ";
            cnt++;
            if(cnt == n/2) i = 1;
            else i+=2;
        }
        cout<<i+diff<<endl;
    }
}
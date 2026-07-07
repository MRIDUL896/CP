#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi = max({a,b,c});
        n -= ((maxi-a) + (maxi-b) + (maxi-c));
        if(n < 0){
            cout<<"NO"<<endl;
            continue;
        }
        if(n%3) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}
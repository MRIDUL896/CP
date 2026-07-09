#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int diff = abs(a-b);
        int ans = diff/10;
        if(diff%10) ans++;
        cout<<ans<<endl;
    }
}
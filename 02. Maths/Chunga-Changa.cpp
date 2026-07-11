#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int s,m,cost;
    cin>>s>>m>>cost;
    long long int ans = s/cost + m/cost;
    s %= cost;
    m %= cost;
    if(s + m < cost) cout<<ans<<" "<<0;
    else cout<<ans+1<<" "<<cost - max(s,m);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a >= c) cout<<-1<<" ";
        else cout<<1<<" ";
        if((long long)b*a > (long long)c) cout<<b<<endl;
        else cout<<-1<<endl;
    }
}
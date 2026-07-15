#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,s;
    cin>>a>>b>>s;
    long long int extra = s-abs(a)-abs(b);
    if(extra<0 || extra & 1) cout<<"No";
    else cout<<"Yes";
}
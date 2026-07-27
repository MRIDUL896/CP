#include<bits/stdc++.h>
using namespace std;

long long int pow(int a,int b){
    if(b == 0) return 1;
    long long int half = pow(a,b/2);
    if(b & 1) return half * half * a;
    return half * half;
}

int main(){
    int n;
    cin>>n;
    long long int ans = 0;
    for(int i=1;i<=n;i++){
        ans += pow(2,i);
    }
    cout<<ans;
}
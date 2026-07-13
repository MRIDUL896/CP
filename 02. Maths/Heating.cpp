#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int ci, sumi;
        cin>>ci>>sumi;
        int q = sumi/ci;
        int rem = sumi%ci;
        int ans = rem*(q+1)*(q+1) + (ci-rem)*q*q;
        cout<<ans<<endl;
    }
}
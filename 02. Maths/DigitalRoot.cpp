#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int k;
        int x;
        cin>>k>>x;
        long long int ans = (k - 1) * 9 + x;
        cout<<ans<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int sum = ((n+k-1)/k)*k; 
        long long int ans = (sum+n-1)/n;
        cout<<ans<<endl;
    }
}
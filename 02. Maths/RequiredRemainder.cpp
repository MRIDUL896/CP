#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        long long start = max(0LL,n-n%x), end = n;
        if(n%x < y){
            start = n - x; 
            end = n - n%x - 1;
        }
        long long ans = -1;
        while(start <= end){
            long long k = start + (end-start)/2;
            long long mod = k%x;
            if(mod == y){
                ans = k;
                break;
            }
            else if(mod > y) end = k - 1;
            else start = k + 1;
        } 
        cout<<ans<<endl;
    }
}
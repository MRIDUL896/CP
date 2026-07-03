#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int curr = arr[n-1];
    long long ans = arr[n-1];
    for(int i=n-2;i>=0;i--){
        curr = min(curr-1,arr[i]);
        if(curr <= 0) break;
        ans += curr;
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1;i<=n-1;i++) cin>>arr[i];
    int curr = 1;
    while(curr<t){
        curr = curr + arr[curr];
    }
    if(curr == t) cout<<"YES";
    else cout<<"NO";
}
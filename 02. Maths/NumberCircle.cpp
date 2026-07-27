#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(arr[n-3] + arr[n-2] <= arr[n-1]){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";;
        swap(arr[n-2],arr[n-1]);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    }
}
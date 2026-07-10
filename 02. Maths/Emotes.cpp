#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,k;
    cin>>n>>m>>k;
    vector<long long int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    long long int maxis = m/(k+1);
    long long int mextra = m%(k+1);
    long long int ans = arr[n-1]*(k*maxis+mextra) + arr[n-2]*maxis;
    cout<<ans;
}
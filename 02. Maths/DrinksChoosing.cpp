#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int cnt = 0, i = 0;
    while(i<n-1){
        if(arr[i] != arr[i+1]) cnt++;
        else cnt +=2;
        i += 2;
    }
    if(n&1) cnt++;
    cout<<cnt;
}
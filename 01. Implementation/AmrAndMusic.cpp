#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back({x,i+1});
    } 
    sort(arr.begin(),arr.end());
    long long cnt = 0, days = 0;
    for(int i=0;i<n;i++){
        if(days + arr[i].first <= k){
            cnt++;
            days += arr[i].first;
        }else break;
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++) cout<<arr[i].second<<" ";
}
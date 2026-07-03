#include<bits/stdc++.h>
using namespace std;

int timeReq(vector<int> &arr){
    int n = arr.size();
    int mini = arr[n-1],maxi = arr[0],minIdx = n-1, maxIdx = 0;
    for(int i=1;i<n;i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            maxIdx = i;
        }
        if(mini > arr[n-i-1]){
            mini = arr[n-i-1];
            minIdx = n-i-1;
        }
    }
    if(maxIdx < minIdx) return maxIdx + (n - 1 - minIdx);
    return maxIdx + (n - 1 - minIdx) - 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<timeReq(arr);
}
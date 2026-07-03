#include<bits/stdc++.h>
using namespace std;

int longestIncSubstring(int *arr, int n){
    int currCnt = 1, ans = 1;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1]){
            currCnt++;
            ans = max(ans,currCnt);
        }else{
            currCnt = 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<longestIncSubstring(arr,n);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        bool isPossible = true;
        for(int j=1;j<=x; j++){
            int idx = i - j;
            if(idx >= 0 && arr[i] > arr[idx]){
                isPossible = false;
                break;
            }
        }
        for(int j=1;j<=y;j++){
            int idx = i + j;
            if(idx < n && arr[i] > arr[idx]){
                isPossible = false;
                break;
            }
        }
        if(isPossible){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}
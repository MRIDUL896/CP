#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sets = (int)ceil((double)n/2);
    int arr[k] = {0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x-1]++; 
    }
    int cnt = 0;
    for(int i=0;i<k;i++){
        cnt += (arr[i]/2)*2;
        sets -= arr[i]/2;
        arr[i] = (arr[i] & 1) ? 1 : 0;
    }
    for(int i=0;i<k;i++){
        if(sets > 0 && arr[i] != 0){
            cnt++;
            sets--;
        } 
    }
    cout<<cnt;
}
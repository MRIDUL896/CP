#include<bits/stdc++.h>
using namespace std;

int minChanges(vector<vector<char>> &mat,int n,int m){
    int ans = 0;
    for(int i=m-2;i>=0;i--){
        if(mat[n-1][i] == 'D') ans++;
    }
    for(int i=n-2;i>=0;i--){
        if(mat[i][m-1] == 'R') ans++;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> arr(n,vector<char>(m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>arr[i][j];
        cout<<minChanges(arr,n,m)<<endl;
    }
}
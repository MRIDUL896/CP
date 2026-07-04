#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                for(int k=0;k<m;k++) ans[k][j] = 0;
                for(int k=0;k<n;k++) ans[i][k] = 0;
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int or_sum = 0;
            for(int k = 0; k < n; k++) or_sum |= ans[i][k];
            for(int k = 0; k < m; k++) or_sum |= ans[k][j];
            // If the reconstructed OR value does not match B[i][j], it's impossible
            if(or_sum != arr[i][j]){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
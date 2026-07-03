#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i&1){
            if(((i+1) % 4) == 0){
                cout<<'#';
                for(int j=0;j<m-1;j++){
                    cout<<'.';
                }
                cout<<endl;
            }else{
                for(int j=0;j<m-1;j++){
                    cout<<'.';
                }
                cout<<'#'<<endl;
            }
        }else{
            for(int j=0;j<m;j++){
                cout<<'#';
            }
            cout<<endl;
        }
    }
}
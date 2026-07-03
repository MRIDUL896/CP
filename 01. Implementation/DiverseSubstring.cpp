#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n>>str;
    for(int i=0;i<n-1;i++){
        if(str[i] != str[i+1]){
            cout<<"YES"<<endl<<str[i]<<str[i+1];
            return 0;
        }
    }
    cout<<"NO";
}
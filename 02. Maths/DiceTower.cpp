#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n < 15){
            cout<<"NO"<<endl;
            continue;
        }
        n %= 14;
        if(n == 0 || n > 6) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}
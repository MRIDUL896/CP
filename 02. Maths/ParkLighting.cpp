#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int cnt = 0;
        cnt += n*(m/2);
        if(m&1) cnt += (n&1) ? n/2+1 : n/2;
        cout<<cnt<<endl;
    }
}
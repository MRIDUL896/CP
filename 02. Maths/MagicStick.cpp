#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==1 && y>1) cout<<"NO";
        else if(x<=3 && y>3) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}
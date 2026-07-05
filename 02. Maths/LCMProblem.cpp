#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a*2 > b) cout<<-1<<" "<<-1;
        else cout<<a<<" "<<2*a;
        cout<<endl;
    }
}
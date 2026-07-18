#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        ll x,y,z;
        z = round(pow(10,c-1));
        x = round(pow(10,a-1));
        y = round(pow(10,b-1)) + z;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
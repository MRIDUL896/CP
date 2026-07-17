#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,x,y,ans;
        cin>>x>>y>>a>>b;
        int sign = ((x*y) <= 0) ? 1 : 0;
        if(sign == 0){
            if(2*a <= b){
                ans = a*abs(x) + a*abs(y);
            }else{
                int bsteps = min(abs(x),abs(y));
                ans = b*(bsteps) + a*((abs(x)-bsteps) + (abs(y)-bsteps));
            }
        }else{
            ans = a*abs(x) + a*abs(y);
        }
        cout<<ans<<endl;
    }
}
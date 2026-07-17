#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum = a + b + c;
        ll mini = min({a,b,c});
        int rounds = sum/9;
        if((sum%9 == 0) && (rounds <= mini)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
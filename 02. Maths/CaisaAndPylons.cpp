#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    ll ans = -1, currScore = 0;
    ll prev,curr;
    for(int i=0;i<n;i++){
        cin>>curr;
        if(i==0) ans = curr;
        else{
            currScore += (prev - curr);
            if(currScore < 0){
                ans += abs(currScore);
                currScore = 0;
            }
        }
        prev = curr;
    }
    cout<<ans;
}
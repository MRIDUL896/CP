#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, people = 0, ans = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        int exitPeople, enterPeople;
        cin>>exitPeople>>enterPeople;
        people -= exitPeople;
        people += enterPeople;
        ans = max(ans,people);
    }
    cout<<ans;
}
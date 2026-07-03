#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(m == n){
        cout<<0;
        return 0;
    } 
    if(m%n != 0){
        cout<<-1;
        return 0;
    }
    int div = m / n;
    int cnt = 0;
    while(div % 2 == 0){
        div /= 2;
        cnt++;
    }
    while(div%3 == 0){
        div /= 3;
        cnt++;
    }
    if(div != 1) cout<<-1;
    else cout<<cnt;
}
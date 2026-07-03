#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int res;
    if(m > n) res = -1;
    else{
        if(n & 1) res = n/2 + 1;
        else res = n/2;
        while(res%m) res++;
    }
    cout<<res;
}
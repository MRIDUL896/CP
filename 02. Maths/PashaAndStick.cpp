#include<bits/stdc++.h>
using namespace std;

long long int pashaSticks(long long int n){
    if(n<4 ||  n&1) return 0;
    long long int ans = n/4;
    if(n%4 == 0) ans--;
    return ans;
}

int main(){
    long long int n;
    cin>>n;
    cout<<pashaSticks(n);
}
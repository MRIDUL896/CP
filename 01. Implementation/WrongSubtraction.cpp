#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while(k){
        int dig = n%10;
        if(dig == 0) n /= 10;
        else n--;
        k--;
    }
    cout<<n;
}
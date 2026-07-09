#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int i = 1;
    while(1){
        int cost = k*i;
        if(cost%10 == 0 || cost%10 == r || cost == r){
            cout<<i;
            break;
        }
        i++;
    }
}
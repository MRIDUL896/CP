#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> daysCap(7);
    int weekCap = 0;
    for(int i=0;i<7;i++){
        cin>>daysCap[i];
        weekCap += daysCap[i];
    } 
    if(n % weekCap == 0) n = weekCap;
    else n %= weekCap;
    int i;
    for(i=0;i<7;i++){
        n -= daysCap[i];
        if(n <= 0) break;
    }
    cout<<i+1;
}
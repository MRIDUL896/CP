#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0;
    cin>>n;
    for(int i=5;i>0;i--){
        cnt += n/i;
        n %= i;
    }
    cout<<cnt;
}
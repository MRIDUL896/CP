#include<bits/stdc++.h>
using namespace std;

int main(){
    int sums[3] = {0};
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            sums[i] += x;
        }
    }
    if(sums[0]==0 && sums[1]==0 && sums[2]==0) cout<<"YES";
    else cout<<"NO";
}
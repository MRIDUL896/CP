#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        n -= 2;
        if(n <= 0){
            cout<<1<<endl;
            continue;
        }
        int floor = ceil((double)n/x) + 1;
        cout<<floor<<endl;
    }
}
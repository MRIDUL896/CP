#include<bits/stdc++.h>
using namespace std;

int main(){
    int m = 5, n = 5;
    int ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int number;
            cin>>number;
            if(number == 1){
                ans = abs(2-i) + abs(2-j);
                cout<<ans;
                return 0;
            }
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isEasy = true;
    for(int i=0;i<n;i++){
        int flag;
        cin>>flag;
        if(flag == 1){
            isEasy = false;
            break;
        }
    }
    if(isEasy) cout<<"Easy";
    else cout<<"Hard";
}
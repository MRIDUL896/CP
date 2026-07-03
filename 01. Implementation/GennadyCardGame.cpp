#include<bits/stdc++.h>
using namespace std;

int main(){
    string tableCard;
    cin>>tableCard;
    bool isGood = false;
    for(int i=0;i<5;i++){
        string myHand;
        cin>>myHand;
        if(tableCard[0] == myHand[0] || tableCard[1] == myHand[1]){
            isGood = true;
            break;
        }
    }
    if(isGood) cout<<"YES";
    else cout<<"NO";
}
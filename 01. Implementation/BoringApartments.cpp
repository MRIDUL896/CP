#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int prevDigCalls = (str[0]-'0'-1)*10;
        int n = str.size();
        int currDigCall = (n*(n+1))/2;
        int totalCalls = prevDigCalls + currDigCall;
        cout<<totalCalls<<endl;
    }
}
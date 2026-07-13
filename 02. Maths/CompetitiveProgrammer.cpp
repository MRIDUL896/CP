#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int eves = 0, digsum = 0;
        bool has0 = false;
        for(char &ch : s){
            if(ch == '0') has0 = true;
            if(!(ch&1)) eves++;
            digsum += (ch - '0');
        }
        if((has0) && (eves > 1) && (digsum%3 == 0)) cout<<"red";
        else cout<<"cyan";
        cout<<endl;
    }
}
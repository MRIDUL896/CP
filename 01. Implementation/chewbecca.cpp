#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        if(ch - '0' > 4){
            if(i==0 && ch == '9') continue;
            s[i] = 9 - (ch - '0') + '0';
        }
    }
    cout<<s;
    return 0;
}
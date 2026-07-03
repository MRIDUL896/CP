#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    if(!(str[0] >= 'A' && str[0] <= 'Z')){
        str[0] = str[0] - 'a' + 'A';
    }
    cout<<str;
}
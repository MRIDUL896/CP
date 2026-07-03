#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || 
    ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'y' || ch == 'Y'; 
}

int main(){
    string str;
    cin>>str;
    string ans;
    for(char &ch : str){
        if(isVowel(ch)) continue;
        else{
            if(ch >= 'a' && ch <= 'z'){
                ans += '.' ;
                ans += ch;
            } 
            else{
                ans += '.';
                ans += char(ch - 'A' + 'a') ;
            } 
        } 
    }
    cout<<ans;
}
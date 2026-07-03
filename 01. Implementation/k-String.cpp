#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string str;
    cin>>str;
    vector<int> freq(26,0);
    for(char &ch : str) freq[ch - 'a']++;
    for(int i=0;i<26;i++){
        if(freq[i] != 0 && freq[i]%k != 0){
            cout<<-1;
            return 0;
        }
    }
    string single = "";
    for(int i=0;i<26;i++){
        int repeats = freq[i]/k;
        for(int j=0;j<repeats;j++){
            single += char(i + 'a');
        }
    }
    string ans = "";
    for(int i=0;i<k;i++) ans += single;
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

string LCM(string s1,string s2){
    int n1 = s1.length(), n2 = s2.length();
    int lcm = (n1*n2)/gcd(n1,n2);
    int LCM1 = lcm/n1;
    string ans = s1;
    for(int i=0;i<LCM1-1;i++){
        ans += s1;
    }
    bool exists = true;
    for(int i=0;i<ans.length();i++){
        int j = i%n2;
        if(ans[i] != s2[j]){
            exists = false;
        }
    }
    if(!exists) return "-1";
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        if(str1.length() > str2.length()) cout<<LCM(str1,str2);
        else cout<<LCM(str2,str1);
        cout<<endl;
    }
}
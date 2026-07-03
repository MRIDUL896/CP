#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int arr[3] = {0};
    for(int i=0;i<str.size();i+=2){
        if(str[i] == '1') arr[0]++;
        else if(str[i] == '2') arr[1]++;
        else arr[2]++;
    }
    string ans;
    for(int i=0;i<3;i++){
        while(arr[i] > 0){
            ans += (i+1) + '0';
            arr[i]--;
            ans += '+';
        } 
    }
    ans.pop_back();
    cout<<ans;
}
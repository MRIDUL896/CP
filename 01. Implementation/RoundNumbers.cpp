#include<bits/stdc++.h>
using namespace std;

void roundExp(string str){
    int n = str.size();
    int nonZero = 0;
    vector<int> ans;
    int multiplier = 1;
    for(int i=n-1;i>=0;i--){
        if(str[i] != '0'){
            nonZero++;
            ans.push_back((str[i] - '0')*multiplier);
        }
        multiplier *= 10;
    }
    cout<<nonZero<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    vector<string> numbers;
    while(t){
        string str;
        cin>>str;
        numbers.push_back(str);
        t--;
    }
    for(int i=0;i<numbers.size();i++){
        roundExp(numbers[i]);
    }
    return 0;
}
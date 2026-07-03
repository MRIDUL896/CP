#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> ansList;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ans = n, st = -1, en = -1;
        for(int i=0;i<n;i++){
            if(str[i] == '1'){
                st = i; 
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(str[i] == '1'){
                en = i; 
                break;
            }
        }
        if(st == -1){
            ansList.push_back(ans);
            continue;
        }
        ans = max({ans,2*(en - st + 1) + 2*(st), 2*(en-st+1) + 2*(n - en - 1)});
        ansList.push_back(ans);
    }
    for(int i=0;i<ansList.size();i++) cout<<ansList[i]<<endl;
}
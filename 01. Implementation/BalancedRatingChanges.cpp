#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isCeil = true;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x&1){
            if(isCeil) x = ceil(double(x)/2);
            else x = floor(double(x)/2);
            isCeil = !isCeil;
        }else x = x/2;
        cout<<x<<endl;
    } 
}
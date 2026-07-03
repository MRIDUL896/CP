#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long totalExpense = (k*w*(w+1))/2;
    if(totalExpense <= n) cout<<"0";
    else cout<<totalExpense-n;

}
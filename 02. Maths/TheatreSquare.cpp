#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int m,n,a;
    cin>>m>>n>>a;
    long long int s1 = (m+a-1)/a;
    long long int s2 = (n+a-1)/a;
    cout<<s1*s2;
}
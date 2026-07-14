#include<bits/stdc++.h>
using namespace std;

int main(){
    double H,L;
    cin>>H>>L;
    double D = ((0.5L)*((L+H)*(L-H)))/H;
    cout<<fixed<<setprecision(13)<<D;
}
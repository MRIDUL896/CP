#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int mid;
    if ((x1>=x2 && x1<=x3) || (x1>=x3 && x1<=x2)) mid = x1;
    else if ((x2>=x3 && x2<=x1) || (x2>=x1 && x2<=x3)) mid = x2;
    else mid = x3;
    cout<<abs(mid-x1)+abs(mid-x2)+abs(mid-x3);
    return 0;
}
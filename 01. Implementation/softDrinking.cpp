#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int i = 0;
    int drinkToasts = k*l / nl;
    int limeToasts = c*d;
    int saltToasts = p / np;
    int maxToasts = min({drinkToasts,limeToasts,saltToasts})/n;
    cout<<maxToasts;
    return 0;
}
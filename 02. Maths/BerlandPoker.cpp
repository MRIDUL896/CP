#include<bits/stdc++.h>
using namespace std;

int solve() {
    int n, m, k;
    cin>>n>>m>>k;
    int onePerson = n/k;
    if(onePerson >= m) return m;
    int remJokers = m - onePerson;
    int minJokers = (remJokers+(k-1)-1)/(k-1);
    return onePerson-minJokers;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}

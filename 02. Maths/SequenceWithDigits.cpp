#include<bits/stdc++.h>
using namespace std;

pair<int,int> findMinMaxDig(long long int n){
    int maxi = INT_MIN, mini = INT_MAX;
    int digs = to_string(n).length();
    while(digs--){
        int dig = n%10;
        maxi = max(maxi,dig);
        mini = min(mini,dig);
        n /= 10;
    }
    return {mini,maxi};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,k;
        cin>>a>>k;
        long long mini,maxi;
        tie(mini,maxi) = findMinMaxDig(a);
        for(int i=0;i<k-1;i++){
            if(mini == 0) break;
            a = a + mini*maxi;
            tie(mini,maxi) = findMinMaxDig(a);
        }
        cout<<a<<endl;
    }
}
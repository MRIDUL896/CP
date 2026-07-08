#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int odds = 0, eves = 0;
        for(int i=0;i<n;i++){
            if((i&1) &&(!(arr[i]&1))) eves++;
            else if(((!(i&1)) &&(arr[i]&1))) odds++;
        }
        if(odds != eves){
            cout<<-1<<endl;
            continue;
        } 
        cout<<odds<<endl;
    }
}
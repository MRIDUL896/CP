#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        vector<vector<int>> hist(n-1,vector<int>(2,0));
        for(int i=0;i<n;i++) arr[i] = i+1;
        for(int i=0;i<n-1;i++){
            int size = arr.size();
            int a = arr[size-1], b = arr[size-2];
            hist[i][0] = a, hist[i][1] = b;
            arr.pop_back();
            arr.pop_back();
            if((a+b) & 1) arr.push_back((a+b)/2 + 1);
            else arr.push_back((a+b)/2);
        }
        cout<<arr[0]<<endl;
        for(int i=0;i<n-1;i++){
            cout<<hist[i][0]<<" "<<hist[i][1]<<endl;
        }
    }
}
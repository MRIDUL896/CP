#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        vector<int> n(4);
        vector<vector<int>> coords;
        for(int i=0;i<4;i++){
            cin>>n[i];
            vector<int> coordsArr;
            for(int j=0;j<n[i];j++){
                int x;
                cin>>x;
                if(j==0 || j==n[i]-1) coordsArr.push_back(x);
            }
            coords.push_back(coordsArr);
        }
        long long int maxArea = 0;
        for(int i=0;i<4;i++){
            long long int base = coords[i][1] - coords[i][0];
            int opp;
            if(i<2) maxArea = max(maxArea,base*h);
            else maxArea = max(maxArea,base*w);
        }
        cout<<maxArea<<endl;
    }
}
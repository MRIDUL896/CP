#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> mp = {
        {"Tetrahedron" , 4},
        {"Cube" , 6},
        {"Octahedron" , 8},
        {"Dodecahedron" , 12},
        {"Icosahedron" , 20}
    };
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        ans += mp[str];
    }
    cout<<ans;
}
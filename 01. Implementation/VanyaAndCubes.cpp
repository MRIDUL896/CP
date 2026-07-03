#include<bits/stdc++.h>
using namespace std;

int cubesInFloor(int floor){
    return (floor*(floor+1))/2;
}

int main(){
    int n;
    cin>>n;
    int floor = 0;
    while(n>0){
        int reqCubes = cubesInFloor(floor+1);
        if(reqCubes > n) break;
        else {
            n -= reqCubes;
            floor++;
        }
    }
    cout<<floor;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int strtHr = stoi(str1.substr(0,2)), strtMin = stoi(str1.substr(3,2));
    int endHr = stoi(str2.substr(0,2)), endMin = stoi(str2.substr(3,2));
    int hrs = endHr - strtHr, mins = endMin - strtMin;
    int totalMins = (hrs*60 + mins)/2;
    int fmins = totalMins%60 + strtMin, fhrs = totalMins/60 + strtHr;
    if(fmins >= 60){
        fmins %= 60;
        fhrs++;
    }
    if(fhrs<10) cout<<"0";
    cout<<fhrs<<":";
    if(fmins<10) cout<<"0";
    cout<<fmins<<endl;
}
#include<bits/stdc++.h>
using namespace std;

bool check(long long r, long long g, long long b, long long w) {
    int odds = (r % 2) + (g % 2) + (b % 2) + (w % 2);
    return odds <= 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long r, g, b, w;
        cin >> r >> g >> b >> w;
        if (check(r, g, b, w)) {
            cout << "Yes\n";
        }
        else if (r > 0 && g > 0 && b > 0 && check(r - 1, g - 1, b - 1, w + 3)) {
            cout << "Yes\n";
        } 
        else {
            cout << "No\n";
        }
    }
    return 0;
}
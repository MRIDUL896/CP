#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int cards_per_player = n / k;
    int x = min(m, cards_per_player);
    int remaining_jokers = m - x;
    int y = (remaining_jokers + k - 2) / (k - 1);
    cout << x - y << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

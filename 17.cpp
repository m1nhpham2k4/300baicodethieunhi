/**
 *    author: dugminz
 */
#include <bits/stdc++.h>
using namespace std;
#define e '\n';

using ll = long long;
const ll N = 200000 + 7;

void solve()
{
    long long a; cin >> a;
    int to1 = 0, to2 = 0, to3 = 0;
    to1 = a / 5000;
    to2 = (a - to1 * 5000) / 2000;
    to3 = (a - to1 * 5000 - to2 * 2000) / 1000;
    cout << to1 << " " << to2 << " " << to3 << e
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}
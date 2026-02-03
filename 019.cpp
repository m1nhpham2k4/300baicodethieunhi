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
    int a, b, c; cin >> a >> b >> c;
    int tong = (a % 2 == 0 ? a / 2 : a / 2 + 1) + (b % 2 == 0 ? b / 2 : b / 2 + 1) + (c % 2 == 0 ? c / 2 : c / 2 + 1);
    cout << tong << e
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
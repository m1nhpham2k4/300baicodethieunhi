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
    int a; cin >> a;
    int gio, phut, giay;
    gio = a / 3600;
    phut = (a - (gio * 3600)) / 60;
    giay = a - (gio * 3600 + phut * 60);
    cout << gio << ":" << phut << ":" << giay << e
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
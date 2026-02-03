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
    double a, b; cin >> a >> b;
    double p, q , r;
    p = 21 * a + 5 * b - 2009;
    q = (21 * a * a - (5 * b)) / (2009 * b * b ) * 1.0;
    r = (21 * a + 5 * b * b) / (2009 * b + 15) * 1.0;
    
    cout << p << " ";
    cout << fixed << setprecision(4) << q << e
    cout << fixed << setprecision(6) << r << e
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
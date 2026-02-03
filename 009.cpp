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
    double a, b, c; cin >> a >> b >> c; 
    double p, q;

    p = (21 * a * a + 5 * b * b) / (2009 * c * c + 15);
    q = (sqrt(a * a - 2 * b)) / (3 * c * c + 4);
    
    cout << fixed << setprecision(4) << p << " ";
    cout << fixed << setprecision(4) << q << e
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
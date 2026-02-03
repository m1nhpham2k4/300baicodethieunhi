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
    while(a > 0){
        cout << a % 10 << " ";
        a /= 10;
    }
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
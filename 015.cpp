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
    int a, b; cin >> a >> b;
    int dem = 0;
    int cnt = 0;
    while(b > 0){
        cnt = b % 10;
        dem++;
        b /= 10;
        if(dem == 2){
            break;
        }
    }
    cout << a % 10 + cnt << e
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
/**
 *    author: dugminz
 */
#include <bits/stdc++.h>
using namespace std;
#define e '\n';

using ll = long long;
const ll N = 200000 + 7;

// Using binpow avoid nubmer overflow
long long binpow(ll a, ll n){
    ll res = 1;
    while(n != 0){
        if(n % 2 == 1){
            res *= a;
        }
        n /= 2;
        a = a * a;
    }
    return res;
}

void solve()
{
    long long a; cin >> a;
    long long b, c;
    b = binpow(a, 2);
    c = binpow(a, 5);
    cout << b << e
    cout << c << e
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
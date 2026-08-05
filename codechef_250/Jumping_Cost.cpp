#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1e9 + 7;
constexpr int MOD2 = 998244353;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

ll solve() {
    ll n;
    cin >> n;
    vll a(n+1);
    for(ll i=1; i<=n; i++) cin>>a[i];
    
    vll prefix(n+1, 0);
    for(ll i=2; i<=n; i++){
        prefix[i] = prefix[i-1]+ max(0LL, a[i]);
    }

    ll ans = 0;

    for (ll m=2; m<=n; m++){
        ll curr = 1-m+a[m]+ prefix[m-1];
        ans = max(ans, curr);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cout << solve() << '\n';
    }
}
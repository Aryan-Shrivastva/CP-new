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
constexpr ll NEG = -(ll)4e18;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

ll solve() {
    ll n;
    cin >> n;
    vll a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    
    vll dp(n+2, NEG);
    dp[1] = 0;
    ll best =0;
    for(ll i=0; i<n; i++){
        ll v = a[i];
        if(best>dp[1]) dp[1] = best;
        ll good = dp[v]+1;
        if(good>dp[v+1]) dp[v+1] = good;
        if(dp[1]>best) best = dp[1];
        if(dp[v+1]>best) best = dp[v+1];
    }   
    // code
    return best;
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
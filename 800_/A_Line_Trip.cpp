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

int solve() {
    int n, x;
    cin >> n>>x;
    vll a(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    a.push_back(0);
    a.push_back(x);
    sort(all(a));
    int m = a.size();
    ll req = -INF;
    for (int i = 1; i < m; i++) {
        if(i==m-1) req = max(req, 2LL*( a[i] - a[i-1]));
        else req = max(req, (a[i] - a[i-1]));
    }

    return req;
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
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
    string s;
    cin>>s;
    int cnt=1;
    for(int i=1; i<n; i++) if(s[i]!=s[i-1]) cnt++;

    int ans = cnt;

    for(int i=1; i<=n-2; i++){
        int prev = (s[i-1]!=s[i])+ (s[i]!=s[i+1]);
        int next = (s[i-1]!=s[i+1]);
        ans = min(ans, cnt-prev+next);
    }
    // code

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
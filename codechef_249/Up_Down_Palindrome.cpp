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

string solve() {
    int n;
    cin >> n;

    vll a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    ll L = -INF;
    ll R  = INF;
    
    for (int i=0; i<n/2; i++){
        ll x = a[i];
        ll y = a[n-1-i];

        if(x==y) continue;

        if(abs(x-y)!=2){
            return "No";
        }
        
        ll low = min(x, y);
        ll high = max(x, y);
        
        L = max(L, low);
        R = min(R, high-1);

    }

    if (L<=R) return "Yes";
            // code

    return "NO";
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
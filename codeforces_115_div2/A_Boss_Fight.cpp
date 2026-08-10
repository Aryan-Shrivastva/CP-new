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

    map<ll, ll> f;
    ll sum=0;

    for(ll i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        f[a[i]]++;
    } 

    ll mx =0;
    ll val=0;

    for(auto [x, f]: f){
        if(f>mx){
            mx = f;
            val = x;
        }
    }
    // code

    ll next = n-mx;
    if(mx<=next+1) return sum;

    return (sum-mx*val) + (next+2)*val;
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
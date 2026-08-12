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

void solve() {
    ll n,q;
    cin >> n>>q;
    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    ll old_sum =0;
    for(ll i=0; i<n; i++){
        old_sum+=a[i];
    }

    vector<ll> prefix(n+1, 0); // becz from every r to l, we need total score so that wwe can replace and check
    for(ll i=1; i<=n; i++) prefix[i] = prefix[i-1]+a[i-1];


    while(q--){
        
        ll l, r, k;
        cin>>l>>r>>k;
        ll sum_remove = prefix[r]-prefix[l-1];
        ll sum_add = (r-l+1)*k;

        ll total = old_sum-sum_remove+sum_add;
        if (total%2==1) cout<< "YES"<<endl;
        else cout<<"NO"<<endl;
    }
    // return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
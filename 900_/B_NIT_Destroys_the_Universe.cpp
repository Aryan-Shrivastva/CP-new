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
    // like we can remove consecutive nonzero sub array, if there are 0 in between, we need to remove those with oper=1 with no of consecutive zero subarrray
    ll zero=0;
    for(ll i=0; i<n; i++){
        if(a[i]==0) zero+=1;
    }

    bool found_zero = 0;
    ll left =0;
    ll right=n-1;

    while(a[left]==0) left+=1;

    while(a[right]==0) right-=1;

    for(ll i=left; i<=right; i++){
        if(a[i]==0) found_zero=true;
    }

    if(zero==n) return 0;
    else if(found_zero==false) return 1;
    else return 2;
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
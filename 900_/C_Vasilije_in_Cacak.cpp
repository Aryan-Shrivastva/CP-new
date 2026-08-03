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
    ll n, k, x;
    cin >> n>>k>>x;

    
    // ll mnTotal=0;
    // for(ll i=1; i<=k; i++){
    //     mnTotal +=i;
    // }
    ll mnTotal = (k*(k+1))/2;
    
    // ll mxTotal=0;
    // for(ll i=n; i>n-k; i--){
    //     mxTotal+=i;
    // }
    ll mxTotal= (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

    if(x>=mnTotal && x<=mxTotal) return "YES";
    else return "NO";

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
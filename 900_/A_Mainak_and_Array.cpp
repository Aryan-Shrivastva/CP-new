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
    for(int i=0; i<n; i++) cin>>a[i];
    // diff btw last and first
    ll ans =a[n-1]-a[0];
    
    //max diff between any element and a[0]
    for(int i=1; i<n; i++) ans = max(ans, a[i]-a[0]);
    // max diff btw any element and last elem
    for(int i=0; i<n-1; i++) ans = max(ans, a[n-1]-a[i]);
    // max diff btw any two adj element
    for(int i=0; i<n-1; i++) ans = max(ans, a[i] - a[i+1]);

    //cannot use sorting because it changes the array and we dont want to change the whole array, we only allowed to perform 
    //only one cycle rotation of one contiguous subarray
    

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
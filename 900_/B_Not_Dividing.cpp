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

vll solve() {
    ll n;
    cin >> n;
    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    // choose any no and add 1, make atmost 2n operations
    // ai+1 !divisible by ai
    //next number should no be divisible by prev number
    for(int i=0; i<n; i++){
        if(a[i]==1){
            a[i]+= 1;
        }
    }

    for(int i=0; i<n-1; i++){
        if(a[i+1]%a[i]==0){
            a[i+1]+= 1;
        }
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {

        vll ans = solve();

        for(ll x : ans) {
            cout << x << " ";
        }

        cout << '\n';
    }

    return 0;
}
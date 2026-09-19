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
    ll x;
    cin>>x;
    ll count=0;
    for(ll i=0; i<n; i++){
        if (a[i]==x) count+=1;
        if (count==2) return i;
    }
    
    if(count==1) return -2;
    else return -1;
    // code
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    cout << solve() << '\n';
    
}
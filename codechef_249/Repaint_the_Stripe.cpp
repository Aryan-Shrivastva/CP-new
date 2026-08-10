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
    ll n, k;
    cin >> n>>k;
    string s;
    cin>>s;

    //recolor any W cell to B cell
    // find min no of cells that must be recolored so that s contains atleast one substring of len k consisting only of B
    ll w=0;
    ll b=0;
    ll mx=0;

    for(int i=0; i<k; i++){
        if(s[i]=='W') w++;
    }
    ll ans=w;
    for (int i=k; i<n; i++){
        if (s[i-k]=='W') w--;
        
        if(s[i]=='W') w++;

        ans = min(ans, w);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << solve() << '\n';

}
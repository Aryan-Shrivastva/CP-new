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

int solve() {
    int x, y, p;
    cin >> x>>y>>p;
    // min no of operations needed for the product of X and Y to becomes >=p

    if (x*y>=p) return 0;
    int mx = INT_MAX;

    for(int i=0; i<=100; i++){
        for(int j=0; j<=100; j++){
            if((x+i)*(y+j)>=p){
                mx = min(mx, i+j);
            }
        }
    } 
    return mx;

    // code

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
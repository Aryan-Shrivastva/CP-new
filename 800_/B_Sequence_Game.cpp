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

void solve() {
    int n;
    cin >> n;

    vll b(n);
    for(int i=0; i<n; i++) cin >> b[i];

    vll a;
    a.push_back(b[0]);

    for(int i=1; i<n; i++){
        if (b[i]>=b[i-1]){
            a.push_back(b[i]);
        }else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout<< a.size()<<endl;

    for(auto it: a){
        cout<<it<<" ";
    } 

    cout<<endl;
    // code
    

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
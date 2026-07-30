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

ll solve() {
    int n;
    cin >> n;

    // code
    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    // if(a.size()==1) return 0;

    ll operations=INT_MAX;
    
    for(int i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            ll diff = a[i+1] - a[i];
            ll req_op = (diff/2)+1;
            operations = min(operations, req_op);
        }else{
            operations = 0;
        }
        
        
    }

    return operations;
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
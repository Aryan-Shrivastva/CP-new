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
    int n;
    cin >> n;

    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    vll c = a;
    for(int i=1; i<n-1; i++){
        if(a[i]<a[i-1] && a[i]<a[i+1]){
            c[i-1] = min(a[i-1],c[i]);
            c[i+1] = c[i];
        }
    }
    int total=0;
    for(int i=0; i<n; i++){
        total+=a[i];
    }
    if (total==sum) return sum;
    
    else{
        return total;
    }
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
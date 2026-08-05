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
    ll n;
    cin >> n;
    string a, b;
    cin>>a>>b;
    
    ll oneA=0, oneB=0, oddA=0, oddB=0;

    for(int i=0; i<n; i++){
        if(a[i]=='1'){
            oneA+=1;
            if(i & 1) oddA+=1;
        }

        if(b[i]=='1'){
            oneB+=1;
            if(i&1) oddB+=1;
        }
    }


    // code

    return (oneA==oneB && oddA==oddB);
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
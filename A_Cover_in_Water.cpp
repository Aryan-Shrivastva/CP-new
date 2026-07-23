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
    string s;
    cin>>s;

    bool ok = false;
    int count=0;

    for(int i=0; i<n; i++){
        if(s[i]=='.' && i+1<n && s[i+1]=='.' and i+2<n && s[i+2]=='.'){
            ok = true;
            break;
        }

        if (s[i]=='.') count++;
    }

    if (ok) return 2;
    else return count;
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
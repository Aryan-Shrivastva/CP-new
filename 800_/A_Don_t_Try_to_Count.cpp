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

bool check(string s, string x){
    // If x is smaller than s, s cannot be a substring of x
    if(x.size()<s.size()) return false;

    // looping thrugh x to find if s is a substring
    for(int i=0; i<x.size()-s.size()+1; i++){ // n - m + 1

        if(x.substr(i, s.size())==s) return true;
    }

    return false;
}

ll solve() {
    ll n, m;
    cin >> n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;

    string x0 = x;
    string x1 = x0+x0;
    string x2 = x1+x1;
    string x3 = x2+x2;
    string x4 = x3+x3;
    string x5 = x4+x4;

    ll ans = -1;

    if (check(s, x0)) ans=0;
    else if (check(s, x1)) ans=1;
    else if (check(s, x2)) ans=2;
    else if (check(s, x3)) ans=3;
    else if (check(s, x4)) ans=4;
    else if (check(s, x5)) ans=5;
    // code
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
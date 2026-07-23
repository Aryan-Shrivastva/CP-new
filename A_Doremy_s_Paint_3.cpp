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

string solve() {
    int n;
    cin >> n;

    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    map<ll, ll> mp;

    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }

    if (mp.size()>=3){
        return "No";
    }
    else{
        ll freq1 = mp.begin()->second;
        ll freq2 = mp.rbegin()->second;
        if(freq1==freq2) return "Yes";
        else if(n%2==1 && abs(freq1-freq2)==1) return "Yes";
        else return "No";
    }
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
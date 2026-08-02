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
    int x, k;
    cin >> x>>k;
 
    // first line-> smallest number of moves to reach x 
    // second line-> print n integers not divisible by k. endpoint after jumps should be exactly x
    // 0->10, but not divisible by k=2... jump to 3 and then 7
    // integer distance not divisble by k
    if (x%k==0){
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;
    } 
    else if(x%k==1){
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<x<<endl;
    }

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
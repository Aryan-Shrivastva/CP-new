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
    int n, k, x;
    cin >> n>>k>>x;

    if (x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1; i<=n; i++) cout<<1<<" ";
        cout<<endl;
    }else{
        if(k==1 || (k==2 && n%2==1)) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n%2==0){
                cout<<n/2<<endl;
                for(int i=1; i<=n/2; i++) cout<<2<<" ";
                cout<<endl;
            }
            else{
                cout<<((n-3)/2)+1<<endl;
                for(int i=1; i<=(n-3)/2; i++) cout<<2<<" ";
                cout<<3<<endl;
            }
        }
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
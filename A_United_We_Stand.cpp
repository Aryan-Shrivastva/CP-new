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
    ll n;
    cin >> n;

    // cant do n^2 as constraint 10^9
    //b and c are emoty array initially
    // for any i and j, Cj is not a divisor
    //output->if exist
    //1st line-> lb and lc of b and c resp
    // 2nd -> lb intergers, elements of b
    // 3rd-> lc integers, elem of c
    
    vll a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    
    ll mx = *max_element(a.begin(), a.end());
    vll b, c;

    for(int i=0; i<n; i++){
        if(a[i]!=mx) b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    if (b.size()==0) cout<<-1<<endl;
    else{
        cout<<b.size()<<" "<<c.size()<<endl;

        for(auto it: b) cout<<it<<" ";
        cout<<endl;

        for(auto it: c) cout<<it<<" ";
        cout<<endl;
    }

    // sort(all(a));

    // deque<ll> b, c;

    // for(int i=0; i<n; i++){
    //     if(i<n/2) b.push_back(a[i]);
    //     else c.push_back(a[i]);
    // }

    // while(!b.empty() && !c.empty() && b.back()==c.front()){
    //     b.push_back(c.front());
    //     c.pop_front();
    // }

    // if(b.empty() || c.empty()){
    //     cout<<-1<<endl;
    //     return;
    // }
    // else{
    //     cout<<b.size()<<" "<<c.size()<<endl;

    //     for(auto it: b) cout<<it<<" ";
    //     cout<<endl;

    //     for(auto it:c) cout<<it<<" ";
    //     cout<<endl;
    // }

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
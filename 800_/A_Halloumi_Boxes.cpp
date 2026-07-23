#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

string solve() {
    ll n, k;
    cin >> n>>k;

    vll a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vll copy_a = a;

    sort(copy_a.begin(), copy_a.end());

    if (copy_a==a || k>1) return "YES";
    else return "NO";
    
    // code
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
	    cout << solve() << "\n";
    }
}
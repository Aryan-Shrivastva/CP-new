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
    int n,k;
    cin >> n>>k;
    string s;
    cin>>s;
    // given string, if we remoive k char, can we make string palindrome, it would be only if the mapped value of characters has even and 

    vector<ll> freq(26,0);
    for(int i=0; i<n; i++){
        freq[s[i]-'a']+=1; // created a map of frequency of characters in the string
    }

    ll odd_freq=0;
    for(int i=0; i<26; i++) odd_freq += freq[i]%2;// here if b=3, then 3%2=1 will be added to odd_freq, if b=4, then 4%2=0 will be added to odd_freq, so odd_freq will have the count of characters with odd frequency

    if(odd_freq>k+1) return "NO";
    else return "YES";
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
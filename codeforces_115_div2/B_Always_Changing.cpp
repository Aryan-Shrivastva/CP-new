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
constexpr ll NEG = -(ll)4e18;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

ll solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c0 = count(s.begin(), s.end(), '0');
    int c1 = n - c0;
    int d = c0 - c1;

    auto f = [&](char st) {
        char need = st;
        int len = 0;
        for (char c : s) {
            if (c == need) {
                len++;
                need = (need == '0' ? '1' : '0');
            }
        }
        return len;
    };

    int a = f('0');
    int b = f('1');

    int ans = INT_MAX;

    auto check = [&](int len, int diff) {
        if (len >= 0 && abs(d - diff) <= 1)
            ans = min(ans, n - len);
    };

    if (a & 1) {
        check(a, 1);
        check(a - 1, 0);
    } else {
        check(a, 0);
        if (a) check(a - 1, 1);
    }

    if (b & 1) {
        check(b, -1);
        check(b - 1, 0);
    } else {
        check(b, 0);
        if (b) check(b - 1, -1);
    }

    return (ans == INT_MAX ? -1 : ans);
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
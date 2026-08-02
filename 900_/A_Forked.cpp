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

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int solve() {
    int a, b;
    cin >> a>> b;
    int xk, yk;
    cin>>xk>>yk;
    int xq, yq;
    cin>>xq>>yq;
    
    // sets to store positions attacked by the knight when placed to attack king and queen
    set<pair<int, int>> king, queen; //king hits, queen hits

    // we have to calculate all possible possitons that can be attacked by the knight
    for(int i=0; i<4; i++){
        //calculate positions attacked by the knight when placed to attack the king
        king.insert({xk+dx[i]*a, yk+dy[i]*b});
        king.insert({xk+dx[i]*b, yk+dy[i]*a});

        //calculate positions attacked by the knight when placed to attack the queen
        queen.insert({xq+dx[i]*a, yq+dy[i]*b});
        queen.insert({xq+dx[i]*b, yq+dy[i]*a});
    }

    int ans =0;

    //checking for common positions in both sets
    for(auto pos: king){
        if(queen.find(pos)!=queen.end()) ans+=1; // this means that if pos in queen_hits, ans+=1
    }


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
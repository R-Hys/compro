#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int N; vector<int> dp;
void input()
{
    cin >> N;
}

// メモ化再帰による DP
int rec(int n){
    if (n == 0) return 0;
    if (dp[n] >= 0) return dp[n];

    int res = 1e9;

    for (int six = 1; six <= n; six *= 6) res = min(res,rec(n-six)+1);
    for (int nine = 1; nine <= n; nine *= 9) res = min(res,rec(n-nine)+1);

    dp[n] = res;
    return res;
}

void solve()
{
    vector<int> P = {1,6,36,216,1296,7776,46656,9,81,729,6561,59049};
    dp.assign(100010,-1);
    for (int i = 0; i < P.size(); ++i) dp[P[i]] = 1;
    cout << rec (N) << endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
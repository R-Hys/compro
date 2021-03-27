#include <iostream>
#include <vector>
using namespace std;

vector<long long> A; int N;
long long mod;
void input()
{
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    mod = 1e9 + 7;
}

void solve()
{
    vector<long long> sum(N);
    sum[0] = A[0];
    for (int i = 1; i < N; ++i) sum[i] = (sum[i-1] + A[i]) % mod;
    long long ans = 0;
    for (int i = 1; i < N; ++i) ans = (ans + (sum[N-1-i] * A[N-i]) % mod) % mod; 
    cout << ans << endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    // int ti = clock();
    // printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
    return 0;
}
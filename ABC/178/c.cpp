#include <iostream>
#include <ctime>
using namespace std;

void solve()
{
    int N; cin >> N;    
    if (N == 1){
        cout << 0 << endl;
        return;
    } else if (N == 2){
        cout << 2 << endl;
        return;
    }
    const int MOD = 1000000007;

    long long ten=1,nine=1,eight=1;
    for (int i = 0; i < N; ++i) ten = (ten*10) % MOD;
    for (int i = 0; i < N; ++i) nine = (nine*9) % MOD;
    for (int i = 0; i < N; ++i) eight = (eight*8) % MOD;
    long long a = (ten-nine+MOD) % MOD;
    long long b = (ten-eight+MOD) % MOD;
    cout << (2*a-b+MOD) % MOD << endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    // int ti = clock();
    // input();
    solve();
    // printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
    return 0;
}
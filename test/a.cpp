#include <iostream>
using namespace std;

int N,K;
void input()
{
    cin >> N >> K;
}

void solve()
{
    if ((N * 12) % K == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    // int ti = clock();
    input();
    solve();
    // printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int N; cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    long long cnt = 0;
    while (A[N-1-cnt] == 0) ++cnt;

    vector<int> B(N-cnt);
    for (int i = 0; i < N-cnt; ++i) B[i] = A[i];

    N -= cnt;
    cnt = 0;
    for (int i = 1; i <= N; ++i){
        if ((B[N-i] + cnt) % (N-i+1) == 0) cnt += (B[N-i] + cnt) / (N-i+1);
        else{
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
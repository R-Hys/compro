#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

int N,K; vector<double> A;
void input()
{
    cin >> N >> K;  
    A.resize(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
}

void solve()
{
    sort(A.begin(),A.end(),greater<int>());
    vector<int> cnt(N,1);
    int itr = 0;
    while (K > 0){
        cnt[itr]++;
        if(A[itr]/cnt[itr] <= A[(itr+1)%N]/cnt[(itr+1)%N]) itr = (itr + 1) % N;

        --K;
    }
    double ans = 0.0;
    for (int i = 0; i < N; ++i){
        printf("%.2f ",A[i]/cnt[i]);
        ans = max(ans,A[i]/cnt[i]);
    }
    printf("\n%.2f\n",ans);

    int int_ans = (int)ans;
    if (int_ans == ans) cout << int_ans << endl;
    else cout << int_ans+1 << endl;
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
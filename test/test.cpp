#include <iostream>
using namespace std;

void solve()
{
    double rate1 = 1.0 * 1023 / 1024;
    double rate = 1.0;
    int lp = 1024;
    int cnt = 0;
    while (lp > 0 && rate > 0.5){
        rate *= rate1;
        --lp;
        ++ cnt;
    }
    printf("%.10lf, cnt:%d\n", 1.0-rate,cnt);    
    
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
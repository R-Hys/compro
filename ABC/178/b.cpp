#include <iostream>
using namespace std;

void solve()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long ans = a*c;
    ans = max(ans, a*d);
    ans = max(ans, b*c);
    ans = max(ans, b*d);
    cout << ans << endl;
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
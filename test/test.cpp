#include <iostream>
using namespace std;

int a,b,c; string s;
void input()
{
    cin >> a >> b >> c >> s;
}

void solve()
{
    cout << a+b+c << " " << s << endl;
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
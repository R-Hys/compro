#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

ll X,K,D;
void input()
{
    cin >> X >> K >> D;
}

void solve()
{
    if (X == 0){
        if (K % 2 == 0) cout << 0 << endl;
        else cout << D << endl;
        return ;
    } else {
        if (X < 0) X = -X;
        ll pl = X % D, mi = D - pl;
        ll to_pl = X / D;
        if (to_pl > K){
            cout << X - K * D << endl;
        } else {
            if ((K - to_pl) % 2 == 0) cout << pl << endl;
            else cout << mi << endl;
        }
    }
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
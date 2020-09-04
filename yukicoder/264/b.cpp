#include <iostream>
using namespace std;

void solve()
{
    int n,z; cin >> n >> z;
    if (n == 1){
        if (z == 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    } else if (n > 2) cout << "No" << endl;
    else {
        for (int i = 0; i < 1000; ++i){
            for (int j = 0; j < 1000; ++j){
                if ((i+1)*(i+1) + (j+1)*(j+1) == z*z){
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
        cout << "No" << endl;
    }
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
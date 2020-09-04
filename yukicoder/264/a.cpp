#include <iostream>
using namespace std;

void solve()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
    string S; cin >> S;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] != S[i]){
            cout << s[i] << "to" << S[i] << endl;
            break;
        }
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
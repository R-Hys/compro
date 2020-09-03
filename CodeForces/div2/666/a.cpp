#include <iostream>
#include <map>
using namespace std;

void solve()
{
    int t; cin >> t;
    for (int i = 0; i < t; ++i){
        int n; cin >> n;
        string s;
        map<char,int> M;
        for (int j = 0; j < n; ++j){
            cin >> s;
            for (int k = 0; k < s.size(); ++k) M[s[k]]++;
        }
        bool chk = true;
        for (auto m: M){
            if (m.second % n != 0){
                chk = false;
                break;
            }
        }
        if (chk) cout << "YES\n";
        else cout << "NO\n";
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
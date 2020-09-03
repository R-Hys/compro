#include <iostream>
#include <set>
using namespace std;

string s;
void input()
{
    cin >> s;
}

void solve()
{
    set<char> st;
    for (int i = 0; i < s.size(); ++i){
        st.insert(s[i]);
    }
    cout << st.size() << endl;
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
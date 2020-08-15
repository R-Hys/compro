#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

string S;
void input()
{
    cin >> S;
}

void solve()
{
    if(S[0] == 'R'){
        if(S[1] == 'R'){
            if(S[2] == 'R'){
                cout << 3 << endl;
                return;
            } else {
                cout << 2 << endl;
                return;
            }
        } else {
            cout << 1 << endl;
            return;
        }
    } else {
        if(S[1] == 'R'){
            if(S[2] == 'R'){
                cout << 2 << endl;
                return;
            } else {
                cout << 1 << endl;
                return;
            }
        } else {
            if(S[2] == 'R'){
                cout << 1 << endl;
                return;
            } else {
                cout << 0 << endl;
                return;
                
            }
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
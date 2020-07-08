#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

ll A,B; string S;
void input()
{
    cin>>A>>S;
    B=(ll)((S[0]-'0')*100+(S[2]-'0')*10+(S[3]-'0'));
}

void solve()
{
    ll ans=A*B;
    cout<<ans/100<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
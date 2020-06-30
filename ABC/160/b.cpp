#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int x;
void input()
{
    cin>>x;
}

void solve()
{
    int ans=0;
    ans+=(x/500)*1000;
    x%=500;
    ans+=(x/5)*5;
    cout<<ans<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
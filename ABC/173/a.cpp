#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int N;
void input()
{
    cin>>N;
}

void solve()
{
    if(N%1000==0) cout<<0<<endl;
    else cout<<1000-(N%1000)<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
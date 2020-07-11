#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int L,R,d;
void input()
{
    cin>>L>>R>>d;
}

void solve()
{
    int ans=0;
    for(int i=L;i<=R;++i){
        if(i%d==0) ++ans;
    }
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
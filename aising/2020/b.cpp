#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int N; vector<int> a;
void input()
{
    cin>>N;
    a.resize(N);
    for(int i=0;i<N;++i) cin>>a[i];
}

void solve()
{
    int ans=0;
    for(int i=0;i<N;i+=2){
        if(a[i]%2==1) ++ans;
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
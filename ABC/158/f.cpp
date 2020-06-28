#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int MOD=998244353;

int N; vi X,D;
void input()
{
    cin>>N;
    for(int i=0;i<N;++i){
        int a,b; cin>>a>>b;
        X.emplace_back(a);
        D.emplace_back(b);
    }
}

void solve()
{
    
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
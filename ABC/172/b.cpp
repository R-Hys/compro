#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

string S,T;
void input()
{
    cin>>S>>T;
}

void solve()
{
    int ans=0;
    for(int i=0;i<S.size();++i){
        if(S[i]!=T[i]) ++ans;
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
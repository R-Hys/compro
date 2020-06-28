#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int N,P; string S;
void input()
{
    cin>>N>>P>>S;
}

void solve()
{
    vi count(P,0); count[0]++;
    int sum=0;
    for(int i=0;i<N;++i){
        sum=(sum*10+S[i]-'0')%P;
        count[sum]++;
    }
    int ans=0;
    for(int i=0;i<P;++i) ans+=count[i]*(count[i]-1)/2;
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
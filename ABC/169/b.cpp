#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

const ll MAX=1000000000000000000;

int N; vll A;
void input()
{
    cin>>N;
    A.resize(N);
    for(int i=0;i<N;++i) cin>>A[i];
}

void solve()
{
    sort(A.begin(),A.end());
    ll ans=1;
    for(int i=0;i<N;++i){
        if(A[i]==0){
            cout<<0<<endl; return;
        }
        else if(MAX/ans<A[i]){
            cout<<-1<<endl; return;
        }
        ans*=A[i];
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
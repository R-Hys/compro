#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
using namespace std;

typedef long long ll;

int N; vector<ll> A;
void input()
{
    cin>>N;
    for(int i=0;i<N;++i){
        ll a; cin>>a; A.emplace_back(a);
    }
}

void solve()
{
    sort(A.begin(),A.end(),greater<ll>());
    ll ans=0;
    map<ll,int> M;
    M[A[0]]++;
    for(int i=1;i<N;++i){
        ans+=M.rbegin()->first;
        M[M.rbegin()->first]--;
        if(M.rbegin()->second==0) M.erase(M.rbegin()->first);
        M[A[i]]+=2;
        // cout<<ans<<endl;
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
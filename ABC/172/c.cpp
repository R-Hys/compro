#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

typedef long long ll;

int N,M; ll K; queue<ll> A,B;
void input()
{
    cin>>N>>M>>K;
    for(int i=0;i<N;++i){
        ll a; cin>>a; A.push(a);
    }
    A.push(1e10+10ll);
    for(int i=0;i<M;++i){
        ll a; cin>>a; B.push(a);
    }
    B.push(1e10+10ll);
}

void solve()
{
    ll a,b;
    a=A.front(); b=B.front();
    A.pop(); B.pop();
    ll time=0ll; int ans=0;
    while(a<1e10 || b<1e10){
        if(a<b){
            time+=a;
            a=A.front(); A.pop();
        }
        else {
            time+=b;
            b=B.front(); B.pop();
        }
        // cout<<time<<" "<<ans+1<<"\n";
        if(time>K) break;
        ++ans;
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
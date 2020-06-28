#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

typedef long long ll;

int N,M; ll K; vector<ll> A,B;
void input()
{
    cin>>N>>M>>K;
    for(int i=0;i<N;++i){
        ll a; cin>>a; A.emplace_back(a);
    }
    for(int i=0;i<M;++i){
        ll a; cin>>a; B.emplace_back(a);
    }
}

void solve()
{
    vector<ll> sumA,sumB;
    sumA.emplace_back(0); sumB.emplace_back(0);
    ll sum=0;
    for(int i=0;i<N;++i){
        sum+=A[i];
        sumA.emplace_back(sum);
    }
    sum=0;
    for(int i=0;i<M;++i){
        sum+=B[i];
        sumB.emplace_back(sum);
    }
    // cout<<sumA[N-1]<<" "<<sumB[M]<<" "<<"\n";
    int ans=0; int maxj=M;
    for(int i=0;i<N+1;++i){
        if(sumA[i]>K) break;
        for(int j=maxj;j>=0;--j){
            if(sumA[i]+sumB[j]>K) continue;
            ans=max(i+j,ans);
            maxj=j;
            break;
            // cout<<sumA[i]<<" "<<sumB[j]<<" "<<i+j<<"\n";
        }
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
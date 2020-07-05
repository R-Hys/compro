#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


typedef long long ll;

const ll MOD=1000000006;

int N,K; vector<pair<int,int>> A;
void input()
{
    cin>>N>>K;
    for(int i=0;i<N;++i){
        int a; cin>>a; 
        if(a>0) A.emplace_back(make_pair(a,1));
        else if(a<0) A.emplace_back(make_pair(-a,-1));
        else A.emplace_back(make_pair(0,0));
    }
}

void solve()
{
    sort(A.begin(),A.end(),greater<int>());
    ll ans=1; int cnt_minus=0;
    for(int i=0;i<K;++i){
        ans*=A[i].first%MOD; ans%=MOD;
        if(A[i].second==-1) cnt_minus++;
    }   
    if(K%2==cnt_minus%2) cout<<ans<<endl;
    else{
        int tmp=A[K-1].second;
        int itr=K;
        while(itr<N)
        {
            if(A[itr].second*tmp==1) break;
            itr++;
        }
        
    }
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
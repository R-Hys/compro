#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

struct UnionFind {
    vi par,siz;

    // UnionFind(int N) : par(N) {
    //     for(int i = 0; i < N; i++) par[i] = i;
    // }

    void assign(int N, int n){
        par.resize(N); siz.resize(N,1);
        for(int i = 0; i < N; i++) par[i] = n;
    }

    int root(int x) { 
        if (par[x]<0) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x); 
        int ry = root(y); 
        if (rx == ry) return; 
        if(siz[rx]<siz[ry]) swap(rx,ry);
        par[ry]=rx;
        siz[rx]+=siz[ry];
    }

    bool same(int x, int y) { 
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size(int x) {
        return siz[root(x)];
    }
};

int N,M,K; vector<set<int>> rmv; UnionFind uf;
void input()
{
    cin>>N>>M>>K;
    rmv.resize(N);
    uf.assign(N,-1);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin>>a>>b;
        --a; --b;
        rmv[a].insert(b);
        rmv[b].insert(a);
        uf.unite(a,b);
    }
    for (int i = 0; i < K; ++i) {
        int a, b;
        cin>>a>>b;
        --a; --b;
        if(!uf.same(a,b)) continue;
        rmv[a].insert(b);
        rmv[b].insert(a);
    }
}

void solve()
{
    for(int i=0;i<N;++i){
        int ans=uf.size(i)-rmv[i].size()-1;
        // cout<<uf.size(i)<<" "<<rmv[i].size()<<" "<<endl;
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
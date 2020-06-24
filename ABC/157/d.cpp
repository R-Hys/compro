#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int N,M,K; vi F[100010],B[100010];
void input()
{
    cin>>N>>M>>K;
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        F[a].push_back(b);
        F[b].push_back(a);
    }
    for (int i = 0; i < K; ++i) {
        int a, b;
        cin >> a >> b;
        B[a].push_back(b);
        B[b].push_back(a);
    }
}

void solve()
{
    vi dist;
    queue<int> que;

    for(int i=1; i<N+1; ++i){
        dist.assign(N+1,-1);
        dist[i] = 0;
        que.push(i);
        while(!que.empty()) {
            int v = que.front(); 
            que.pop();
            for(int nv: F[v]){
                if(dist[nv]!=-1) continue; 
                dist[nv]=dist[v]+1;
                que.push(nv);
            }
        }
        int ans=0;
        for(int v=1; v<N+1; ++v){
            if(dist[v]>1){
                bool flag=true;
                for(int nv:B[i]){
                    if(nv==v) flag=false;
                }
                if(flag) ++ans;
            }
        }
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
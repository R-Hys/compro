#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int N,M,X; vi C; vector<vector<int>> A;
void input()
{
    cin>>N>>M>>X;
    A.resize(N);
    for(int i=0;i<N;++i){
        int c; cin>>c; C.emplace_back(c);
        for(int j=0;j<M;++j){
            int a; cin>>a; A[i].emplace_back(a);
        }
    }
}

void solve()
{
    bitset<12> bst(12);
    int ans=-1; vi understand;
    for(int i=0;i<(1<<N);++i){
        bst=0|i;
        // cout<<bst[0]<<endl;
        understand.assign(M,0);
        int cost=0;
        for(int j=0;j<N;++j){
            if(bst[j]==0) continue;
            for(int k=0;k<M;++k) {
                understand[k]+=A[j][k];
                // cout<<understand[k]<<" ";
            }
            cost+=C[j];
            // cout<<"\n";
        }
        // cout<<"cost:"<<cost<<"\n";
        bool check=true;
        for(int j=0;j<M;++j){
            if(understand[j]<X) check=false;
        }
        if(check){
            if(ans<0) ans=cost;
            else ans=min(ans,cost);
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
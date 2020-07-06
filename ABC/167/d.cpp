#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int N; ll K; vi A;
void input()
{
    cin>>N>>K;
    A.resize(N+1);
    for(int i=0;i<N;++i) cin>>A[i+1];
}

void solve()
{
    map<int,int> M;
    int i=1; M[i]++; int loop; int cnt=0;
    while(1){
        ++cnt;
        if(M[A[i]]>0){
            loop=A[i]; break;
        }
        M[A[i]]++; i=A[i];
        if(cnt==K){
            cout<<i<<endl; return;
        }
    }
    // cout<<loop<<endl;
    i=1; int left;
    while(1){
        if(i==loop){
            left=i; break;
        }
        i=A[i];
    }
    vi vloop;
    vloop.emplace_back(left);
    i=A[left];
    while(1){
        if(i==loop) break;
        vloop.emplace_back(i);
        i=A[i];
    }
    int loop_size=vloop.size();
    cout<<vloop[(K-cnt)%loop_size]<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
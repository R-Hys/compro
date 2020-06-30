#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<int> vi;

int K,N; vi A;
void input()
{
    cin>>K>>N;
    for(int i=0;i<N;++i){
        int a; cin>>a; A.emplace_back(a);
    }    
}

void solve()
{
    int ans=A[0]+K-A[N-1];
    for(int i=0;i<N-1;++i){
        ans=max(ans,A[i+1]-A[i]);
    }
    cout<<K-ans<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
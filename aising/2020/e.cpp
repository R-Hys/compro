#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int T,N; vi K; vll L,R;
void input()
{
    cin>>T;
}

void solve()
{
    for(int i=0;i<T;++i){
        cin>>N;
        K.resize(N);L.resize(N); R.resize(N);
        for(int j=0;j<N;++j) cin>>K[j]>>L[j]>>R[j];

        
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
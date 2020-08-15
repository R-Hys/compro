#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

int N; vector<ll> L;
void input()
{
    cin >> N;
    L.resize(N);
    for(int i=0; i<N; ++i) cin >> L[i];
}

void solve()
{
    sort(L.begin(),L.end());
    int ans = 0;
    for(int i=0; i<N; ++i){
        for(int j=i+1; j<N; ++j){
            for(int k=j+1; k<N; ++k){
                if(L[i] < L[j] && L[j] < L[k] && L[i] + L[j] > L[k]) ++ans;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
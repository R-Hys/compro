#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int h,w,k; int S[11][1001];
void input()
{
    cin>>h>>w>>k;
    for(int i=0;i<11;++i){
        for(int j=0;j<1001;++j){
            S[i][j]=0;
        }
    }
    for(int i=1;i<h+1;++i){
        for(int j=1;j<w+1;++j){
            cin>>S[i][j];
        }
    }
}

void solve()
{
    
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
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

int N;
void input()
{
    cin>>N;
}

void solve()
{
    map<int,int> M;
    for(int x=1;x*x<=N;++x){
        for(int y=1;y*y<=N;++y){
            for(int z=1;z*z<=N;++z){
                M[x*x+y*y+z*z+x*y+y*z+z*x]++;
            }
        }
    }
    for(int i=1;i<=N;++i){
        cout<<M[i]<<endl;
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
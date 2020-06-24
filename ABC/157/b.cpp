#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int A[3][3]; int N; vi b;
void input()
{
    for(int i=0;i<3;++i) for(int j=0;j<3;++j) cin>>A[i][j];
    cin>>N;
    for(int i=0;i<N;++i){
        int a; cin>>a; b.emplace_back(a);
    }
}

void solve()
{
    for(int i=0;i<N;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<3;++k){
                if(b[i]==A[j][k]) A[j][k]=0;
            }
        }
    }

    string ans="No";
    for(int i=0;i<3;++i){ 
        if(A[i][0]==0 && A[i][1]==0 && A[i][2]==0) ans="Yes";
    }
    for(int i=0;i<3;++i){ 
        if(A[0][i]==0 && A[1][i]==0 && A[2][i]==0) ans="Yes";
    }
    if(A[0][0]==0 && A[1][1]==0 && A[2][2]==0) ans="Yes";
    if(A[2][0]==0 && A[1][1]==0 && A[0][2]==0) ans="Yes";

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
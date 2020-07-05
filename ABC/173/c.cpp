#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

int H,W,K; char c[7][7]; 
void input()
{
    cin>>H>>W>>K;
    for(int i=1;i<=H;++i){
        for(int j=1;j<=W;++j){
            cin>>c[i][j];
        }
    }
}

void solve()
{
    int ans=0;
    bitset<6> brow(0),bcol(0);
    for(int i=0;i<(1<<H);++i){
        for(int j=0;j<(1<<W);++j){
            brow=0|i;
            bcol=0|j;

            // cout<<brow<<" "<<bcol<<"\n";

            int black=0;
            for(int x=1;x<=H;++x){
                for(int y=1;y<=W;++y){
                    if(brow[x-1]==0 && bcol[y-1]==0 && c[x][y]=='#') black++;
                }
            }
            if(black==K) ++ans;
            // cout<<"black: "<<black<<endl;
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
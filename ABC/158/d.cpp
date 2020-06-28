#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

string S; int Q;
void input()
{
    cin>>S>>Q;
}

void solve()
{
    int rev_count=0;
    for(int i=0;i<Q;++i){
        int t; cin>>t;
        if(t==1) rev_count++;
        else if(t==2){
            int f; char c; cin>>f>>c;
            if((rev_count%2==1 && f==1)||(rev_count%2==0 && f==2)) S=S+c;
            else if((rev_count%2==1 && f==2)||(rev_count%2==0 && f==1)) S=c+S;
        }
    }
    if(rev_count%2==1) reverse(S.begin(),S.end());
    cout<<S<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
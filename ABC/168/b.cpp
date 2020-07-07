#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int K; string S;
void input()
{
    cin>>K>>S;
}

void solve()
{
    if(S.length()<=K) cout<<S<<endl;
    else{
        for(int i=0;i<K;++i) cout<<S[i];
        cout<<"..."<<endl;
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
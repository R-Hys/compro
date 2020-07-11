#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
#include <stack>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const double PI=acos(-1.0);

int N; bitset<200010> bts;
void input()
{
    cin>>N>>bts;
}

int gcd(int a, int b)
{
    int rtn=0;
    int c=a%b;
    while(c!=0){
        a=b; b=c; c=a%b; ++rtn;
    }
    return rtn+1;
}

void solve()
{
    int num=0;
    for(int i=0;i<N;++i){
        if(bts[i]==1) ++num;
    }
    // cout<<num<<endl;
    int mod_mi=num-1,mod_pl=num+1;
    
    int sum_mi=0; int seki=1;
    for(int i=0;i<N;++i){
        if(bts[i]==1) sum_mi=(sum_mi+seki%mod_mi)%mod_mi;
        seki=(seki*2)%mod_mi;
    }
    int sum_pl=0; seki=1;
    for(int i=0;i<N;++i){
        if(bts[i]==1) sum_pl=(sum_pl+seki%mod_pl)%mod_pl;
        seki=(seki*2)%mod_pl;
    }

    stack<int> ans; int seki_pl=1,seki_mi=1;
    for(int i=0;i<N;++i){
        if(bts[i]==1){
            sum_mi=(sum_mi-seki_mi)%mod_mi;
            ans.push(gcd(sum_mi,mod_mi));
        }
        else {
            sum_pl=(sum_pl+seki_pl)%mod_pl;
            ans.push(gcd(sum_pl,mod_pl));
        }
        seki_pl=(seki_pl*2)%mod_pl;
        seki_mi=(seki_mi*2)%mod_mi;
    }
    while (!ans.empty())
    {   
        cout<<ans.top()<<endl; ans.pop();
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
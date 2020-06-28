#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

const double PI=acos(-1.0);


int gcd(int a, int b)
{
    int c=a%b;
    while(c!=0){
        a=b; b=c; c=a%b;
    }
    return b;
}

int N; vll f;
void input()
{
    cin>>N;
}

void solve()
{
    f.assign(10000010,-1);
    f[1]=1;
    for(int i=2;i<N+1;++i){
        map<int,int> M;
        int j=2; int tmp_i=i;
        while(j<=tmp_i){
            if(tmp_i%j==0){
                tmp_i/=j; M[j]++; continue;
            }
            else ++j;
        }
        f[i]=1;
        for(auto p:M){
            f[i]*=p.second+1;
        }
    }
    ll ans=0;
    for(int i=1;+i<N+1;++i){
        ans+=i*f[i];
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
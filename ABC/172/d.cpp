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

int N; 
void input()
{
    cin>>N;
}

void solve()
{
    ll ans=0;
    for(int i=1;i<N+1;++i){
        int j=1;
        while(i*j<=N){
            ans+=i*j; ++j;
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
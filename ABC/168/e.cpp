#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

const ll MOD=1000000007;

int N,zerozero,azero,bzero; vector<pair<double,pair<ll,ll>>> G1,G2,G3,G4;
void input()
{
    cin>>N;
    zerozero=azero=bzero=0;
    for(int i=0;i<N;++i){
        ll a,b; cin>>a>>b;
        if(a<0 && b<0){
            a=abs(a); b=abs(b);
            double rate=1.0*a/b;
            G1.emplace_back(rate,make_pair(a,b));
        }
        else if(a>0 && b<0){
            b=abs(b);
            double rate=1.0*a/b;
            G2.emplace_back(rate,make_pair(a,b));
        }
        else if(a<0 && b>0){
            a=abs(a);
            double rate=1.0*a/b;
            G3.emplace_back(rate,make_pair(a,b));
        }
        else if(a>0 && b>0){
            double rate=1.0*a/b;
            G4.emplace_back(rate,make_pair(a,b));
        }
        else if(a==0 && b==0) ++zerozero;
        else if(a==0) ++azero;
        else if(b==0) ++bzero;
    }
}

void solve()
{
    int set=zerozero+azero*bzero;
    sort(G1.begin(),G1.end());
    sort(G2.begin(),G2.end());
    sort(G3.begin(),G3.end());
    sort(G4.begin(),G4.end());
    for(auto g1:G1){
        double rate=1.0*g1.second.first/g1.second.second;
        for(auto g2:G2){
            if(rate*g2.first>0.999 && rate*g2.first<1.001){
                if(g1.second.first*g2.second.first-g1.second.second*g2.second.second==0) ++set;
            }
            if(rate*g2.first>=1.001) break;
        }
        for(auto g3:G3){
            if(rate*g3.first>0.999 && rate*g3.first<1.001){
                if(g1.second.first*g3.second.first-g1.second.second*g3.second.second==0) ++set;
            }
            if(rate*g3.first>=1.001) break;
        }
    }
    for(auto g4:G4){
        double rate=1.0*g4.second.first/g4.second.second;
        for(auto g2:G2){
            // cout<<rate<<" "<<g2.first<<endl;
            if(rate*g2.first>0.999 && rate*g2.first<1.001){
                if(g4.second.first*g2.second.first-g4.second.second*g2.second.second==0) ++set;
            }
            if(rate*g2.first>=1.001) break;
        }
        for(auto g3:G3){
            if(rate*g3.first>0.999 && rate*g3.first<1.001){
                if(g4.second.first*g3.second.first-g4.second.second*g3.second.second==0) ++set;
            }
            if(rate*g3.first>=1.001) break;
        }
    }

    ll sum=1;
    for(int i=0;i<N-set*2;++i) {
        sum*=2; sum%=MOD;
    }
    for(int i=0;i<set;++i) {
        sum*=3; sum%=MOD;
    }
    cout<<sum-1<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
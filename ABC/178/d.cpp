#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;
const int MOD = 1000000007;
long long fact[2005],ifact[2005];

long long power(long long a, long long  b)
{
	long long res=1;
	while(b>0){
		if(b&1) res=res*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return res;
}

long long nCr(int n, int r)
{
    return (fact[n]*ifact[r])%MOD*ifact[n-r]%MOD;
}

void solve()
{
    long long ans = 0;
    int N; cin >> N;
    if(N<=2){
        cout << 0 << endl;
        return;
    }

    fact[0]=1;
    for (int i = 0; i < N; ++i) fact[i+1]=fact[i]*(i+1)%MOD;
    ifact[N]=power(fact[N], MOD-2);
    for (int i = N-1; i >= 0; --i) ifact[i]=ifact[i+1]*(i+1)%MOD;

    int size = 1;
    while(N >= size*3){
        if(size==1){
            ans+=1; ++size; continue;
        }
        ans = (ans + nCr(N-2*size-1,size-1))%MOD;
        ++size;
    }
    cout << ans << endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    // int ti = clock();
    // input();
    solve();
    // printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
    return 0;
}
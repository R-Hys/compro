#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(),a.end());
    const long long INF = 1e18;
    long long ans = INF;

    for (int i = 1; i <= 1000000; i++){
        long long c = 1;
        long long sum = 0;
        for (int j = 0; j < n; ++j){
            if (sum + abs(a[j] - c) < sum){
                sum = INF; break;
            }
            sum += abs(a[j] - c);
            if(c*i < c) {
                if (j < n-1) sum = INF;
                break;
            }
            c *= i;
        }  
        ans = min(ans, sum);
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
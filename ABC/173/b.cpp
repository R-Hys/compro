#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int N; map<string,int> M;
void input()
{
    cin>>N;
}

void solve()
{
    for(int i=0;i<N;++i){
        string s; cin>>s; M[s]++;
    }
    cout<<"AC x "<<M["AC"]<<"\n";
    cout<<"WA x "<<M["WA"]<<"\n";
    cout<<"TLE x "<<M["TLE"]<<"\n";
    cout<<"RE x "<<M["RE"]<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
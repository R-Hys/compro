#include <iostream>
#include <vector>
using namespace std;


/*
#include <algorithm>
GCD = __gcd(a,b)
で使える
*/
int gcd(int a, int b)
{
    int c=a%b;
    while(c!=0){
        a=b; b=c; c=a%b;
    }
    return b;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}


void input()
{
    
}

void solve()
{
    
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}
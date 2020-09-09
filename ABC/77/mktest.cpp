#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    srand((unsigned)time(NULL));

    int N = rand() % 50000 + 1;
    cout << N << endl;

    int lp = 3;
    while(lp>0){
        for (int i = 0; i < N; ++i) {
            cout << rand() % 100000 + 1 << " ";
        }
        cout << endl;
        --lp;
    }

    return 0;
}
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

    int N = rand() % 49 + 2;
    int M = 10;
    cout << N << " " << M << endl;
    for (int i = 0; i < M; ++i) {
        cout << rand()%N+1 << " " << rand()%N+1 << endl;
    }
    
    return 0;
}
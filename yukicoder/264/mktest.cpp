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

    int N = rand() % 10+2;
    cout << N << endl;
    for (int i = 0; i < N-1; ++i){
        cout << rand() % (i+2) << " ";
    }
    cout << N;
    
    return 0;
}
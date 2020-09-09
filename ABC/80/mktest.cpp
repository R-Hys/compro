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

    int N = rand() % 100;

    string s;
    s.resize(N);
    for (int i = 0; i < N; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    cout << N << " " << s << endl;
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
    static const char alphanum[] =
        "abcdefghijklmnopqrstuvwxyz";

    srand((unsigned)time(NULL));

    int N = rand() % 5000+1;
    // int N = 5000;

    string s;
    s.resize(N);
    for (int i = 0; i < N; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    cout << s << "\n3" << endl;
    return 0;
}
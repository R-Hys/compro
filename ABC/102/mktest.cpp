#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
    srand((unsigned)time(NULL));

    int N = rand() % 200000+1;
    // int N = rand() % 20+1;
    printf("%d\n",N);
    for (int i = 0; i < N; ++i){
        printf ("%d ", rand() % 1000000000 + 1);
        // printf ("%d ", rand() % 10000000 + 1);
    }
    return 0;
}
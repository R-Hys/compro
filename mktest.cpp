#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
    srand((unsigned)time(NULL));

    int N = rand() % 100000000;

    printf("%d",N);
    return 0;
}
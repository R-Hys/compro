#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

bool chk(vector<int> P)
{
    for (int i = 0; i < P.size(); ++i){
        if(P[i] == i+1){
            return false;
        }
    }
    return true;
}

int main()
{   
    srand((unsigned)time(NULL));

    int N = rand() % 4999 + 2;
    // int N = rand() % 5 + 2;
    int K = rand() % 1000000000 + 1;
    // int K = rand() % 100 + 1;
    printf("%d %d\n", N, K);

    vector<int> P(N);
    for (int i = 0; i < N; ++i){
        P[i] = i + 1;
    }
    mt19937 get_rand_mt(rand());
    while (!chk(P)){
        shuffle(P.begin(),P.end(),get_rand_mt);
    }
    for (int i = 0; i < N; ++i){
        printf("%d ", P[i]);
    }
    printf("\n");

    for (int i = 0; i < N; ++i){
        int C = rand() % 2000000001 - 1000000000;
        // int C = rand() % 21 - 10;
        printf("%d ", C);
    }
    printf("\n");
    return 0;
}
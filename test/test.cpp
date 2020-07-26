#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
#include <queue>
#include <map>
using namespace std;


int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    
    // set the pairs that I found
    vector<bitset<5>> B5(16); vector<bitset<4>> B4(16);
    B5[0] = 3; B4[0] = 0;
    B5[1] = 7; B4[1] = 1;
    B5[2] = 19; B4[2] = 2;
    B5[3] = 6; B4[3] = 3;
    B5[4] = 11; B4[4] = 4;
    B5[5] = 9; B4[5] = 5;
    B5[6] = 18; B4[6] = 6;
    B5[7] = 22; B4[7] = 7;
    B5[8] = 21; B4[8] = 8;
    B5[9] = 5; B4[9] = 9;
    B5[10] = 17; B4[10] = 10;
    B5[11] = 28; B4[11] = 11;
    B5[12] = 10; B4[12] = 12;
    B5[13] = 13; B4[13] = 13;
    B5[14] = 26; B4[14] = 14;
    B5[15] = 12; B4[15] = 15;
    cout << "code symbol table" << endl;
    cout << "-----------------" << endl;
    for(int i=0; i<16; ++i){
        cout<<B5[i]<<" "<<B4[i]<<endl;
    }
    cout << endl;

    // check the input values
    for(int i = 0; i < 16; ++i){
        if(!(B5[i].count() == 2 || B5[i].count() == 3)){
            cout << "invalid code" << endl;
            return 0;
        }
    }

    // check the validation of inputs
    for(int i = 0; i < 16; ++i){
        bitset<5> tmpB = B5[i];
        for(int j = 0; j < 5; ++j){
            tmpB.flip(j);
            if(!(tmpB.count() == 2 || tmpB.count() == 3)) {
                tmpB.flip(j);
                continue;
            }
            for(int k = 0; k < 16; ++k){
                if(B5[k] == tmpB){
                    int d = B4[i].count() - B4[k].count();
                    if(abs(d) != 1){
                        cout << "do not meet the conditions" << endl;
                        return 0;
                    }
                    break;
                }
            }
            tmpB.flip(j);
        }
    }
    cout << "OK!" << endl;
    return 0;
}
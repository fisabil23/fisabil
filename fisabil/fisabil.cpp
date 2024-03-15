

#include <iostream>

using namespace std;

void insertionsrrot() {
    int i, n, temp, j;
    int fsb[11];

    for (i = 1; i <= n - 1; i++) //step 1
    {
        temp = fsb[i]; //step 2
        j = i - 1; // step 3
        while (j >= 0 && fsb[j] > temp)
        {
            fsb[j + 1] = fsb[j];
            j = j - 1;
        }





    }
    
/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 02-10-2020, 10:10:53 pm IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

int main( )
{
    int n;
    cin >> n;
    while (1)
    {
        cout << n << ' ';
        if (n == 1)
            break;
        n = ((n & 1) ? (n * 3) + 1 : n / 2);
    }
    return 0;
}

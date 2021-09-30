/**
* Loic Konan
* 4883 - Programming Techniques.
* P900
* 09/25/2021
* This gave me a run time of 0.00 seconds.
*/

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

#define FileIn(file) freopen(file ".inp", "r", stdin)
#define FileOut(file) freopen(file ".out", "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define bit(n) (1 << (n))
#define Last(i) (i & -i)
#define INF 500000000
#define EPS 1e-7
#define maxN 10000
using namespace std;
#define endl "\n"

int main()
{                     
    int64 Max_values[51];                                       // The maximum value for the length wall won't be more than 50.
    Max_values[1] = 1;                                          // We can just start storing 1 and 2 in our array ignoring 0 location.
    Max_values[2] = 2;                                          
    int number;                                                 // This represent the length of the wall.

    int a = 3;                                                   
    int b = 51;                                                 // The length of our array.

    FOR(i, a, b)                                                // Pretty much printing out fibonacci sequences.
        Max_values[i] = Max_values[i - 1] + Max_values[i - 2];
    
    while (cin >> number && number != 0 )                       // Read in each value as long as it not 0.
    {
         cout << Max_values[number] << endl;                    // Display the result.
    }
    return 0;
}

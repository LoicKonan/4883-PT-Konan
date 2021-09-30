/**
* Loic Konan
* 4883 - Programming Techniques.
* P10226
* 09/25/2021
* This gave me a run time of 0.43 seconds.
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
#include <iomanip>

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
    int test_cases;                                       // Number of test cases.
    string species;                                       // Species of every tree.
    cin >> test_cases;                                    // Read in the test cases.
    cin.ignore(); cin.ignore();                           // Clear one or more characters from the input buffer.                                          

    while (test_cases--)                                  // While our test case number is not 0.
    {
        map<string, int> Trees;                           // Create a map that we will store our trees with a key.
        int total;                                  

        while (getline(cin, species))                     // Read in each line, as long as there is not empty string.
        {
            if ( species == "") break;                    // If we have an empty string break.
            Trees[species]++;                             // Add to our map.
            total++;                                      // Increment our total counter.
        }
                                                          // Created this map for our for loop to retrieved based on a key.
                                                          // Using this for loop and Iomanip to display the Stats.
        for ( map<string,int>::iterator it = Trees.begin(); it != Trees.end(); it++) 
        {
            cout << it->first << " " << setprecision(4) << fixed << ((it->second) * 100) / double(total) << endl;
        }
        if (test_cases) cout  << endl;                  
        Trees.clear();                                    // Clear the map.
        total = 0;
    }
    return 0;
}
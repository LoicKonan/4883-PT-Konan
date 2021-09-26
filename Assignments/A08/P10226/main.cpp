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
    int test_cases;                                     // Number of test cases.
    string species;                                     // Species of every tree.
    cin >> test_cases;                                  // Read in the test cases.
    cin.ignore();                                       // Clear one or more characters from the input buffer.
    cin.ignore();                                       // Clear one or more characters from the input buffer.

    while (test_cases--)                                // 
    {
        map<string, int> list;                          //
        map<string, int>::iterator it;                  //
        int total = 0;                                  //

        while (getline(cin, species))                   // read in each line, counting trees
        {
            if (species == " ") break;                  //
            list[species]++;                            //
            total++;                                    //
        }

        for (it = list.begin(); it != list.end(); it++) // Using this for loop to display the Stats.
        {
            cout << it->first << " " << setprecision(4) << fixed << ((it->second) * 100.0) / total << endl;
        }
        if (test_cases) cout  << endl;                  //
        list.clear();                                   // Clearing our map of list.
    }
    return 0;
}
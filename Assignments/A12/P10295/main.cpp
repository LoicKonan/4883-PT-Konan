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
    uint64 words;                                   // Using long long for The number of words in the Hay Point.
    uint64 n;                                   // Using long long for The number of job descriptions.
    cin >> words >> n;                              // Read in the number of words and job descriptions.

    map<string, int> memo;                      // Declaring Map to be of <string, int> type.
    
    REP(i, n)
    {
        string word;
        int value;
        cin >> word >> value;
        memo[word] = value;
    }
    
    REP(i, n)
    {
        string word;
        int salary = 0;
        while (cin >> word, word != ".")
            salary += memo[word];

        cout << salary << endl;                  // Display the results.
    }
    return 0;
}
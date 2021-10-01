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
    int words;                                      // The number of words in the Hay Point.
    int numb_Job;                                   // The number of job descriptions.
    string word;                                    // 

    map<string, int> memo;                          // Declaring Map to be of <string, int> type.
    
    cin >> words >> numb_Job;                       // Read in the number of words and job descriptions.
    REP(i, words)
    {
        int value;
        cin >> word >> value;                       // Read in the number of words and job descriptions.
        memo[word] = value;
    }
    
    REP(i, numb_Job)
    {
        int Total = 0;
        while (cin >> word, word != ".")            // Read in the Text until the period.
              Total += memo[word];                  // Computing the salary as the sum of the Hay Point values
                                                    // for all words that appear in the description.

        cout << Total << endl;                      // Display the salary computed.
    }
    return 0;
}
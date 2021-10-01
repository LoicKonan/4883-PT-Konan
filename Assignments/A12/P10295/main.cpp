/**
* Loic Konan
* 4883 - Programming Techniques.
* P10295
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
    uint64 Total;                                   // long long for the the total salary.
    int words;                                      // The number of words in the Hay Point.
    int numb_Job;                                   // The number of job descriptions.
    string word;                                    // 

    map<string, int> dictionary;                    // Declaring Map to be of <string, int> type.
    
    cin >> words >> numb_Job;                       // Read in the values for the number of words and job descriptions.
    
    REP(i, words)                                   //
    {
        int value;
        cin >> word >> value;                       // Read in the descriptions and number.
        dictionary[word] = value;
    }
    
    REP(i, numb_Job)                                //
    {
        Total = 0;
        while (cin >> word, word != ".")            // Read in the Text until the period.
              Total += dictionary[word];            // Computing the salary as the sum of the Hay Point values
                                                    // for all words that appear in the description.

        cout << Total << endl;                      // Display the salary computed.
    }
    return 0;
}
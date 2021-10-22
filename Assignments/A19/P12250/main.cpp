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

typedef vector<int> vi;    // vector if ints
typedef pair<int, int> ii; // pair of ints
typedef vector<ii> vii;    // vector of pairs
typedef vector<vi> vvi;    // vector of vector of ints

int main()
{
    string S;
    int i = 1;
    while (cin >> S && S != "#")
    {
        if (S == "HELLO")               cout << "Case " << i << ": ENGLISH\n";

        else if (S == "HOLA")           cout << "Case " << i << ": SPANISH\n";

        else if (S == "HALLO")          cout << "Case " << i << ": GERMAN\n";

        else if (S == "BONJOUR")        cout << "Case " << i << ": FRENCH\n";
    
        else if (S == "CIAO")           cout << "Case " << i << ": ITALIAN\n";
    
        else if (S == "ZDRAVSTVUJTE")   cout << "Case " << i << ": RUSSIAN\n";
    
        else                            cout << "Case " << i << ": UNKNOWN\n";

        i++;
    }
    return 0;
}
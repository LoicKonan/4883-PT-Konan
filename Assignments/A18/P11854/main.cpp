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
   int a;
   int b;
   int c;

    vector<int> numbers;
    
    while ((cin >> a >> b >> c) && (a != 0) && (b != 0) && (c != 0))
    {
        cout << a << " " << b << " " << c << endl;

        numbers.push_back(a);
        numbers.push_back(b);
        numbers.push_back(c);

        cout << numbers[a] << " " << numbers[b] << numbers[c] << endl;

        sort(numbers.begin(), numbers.end());

        for (int i = 0; i < 3; i++)
        {
            a = numbers[i];
            b = numbers[i + 1];
            c = numbers[i + 2];

            if (sqrt(a * a) == sqrt((b * b) + c * c)) cout << "right\n";
            else cout << "wrong\n";
        }
    }
    return 0;
}
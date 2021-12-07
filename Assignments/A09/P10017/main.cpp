/**
* Loic Konan
* 4883 - Programming Techniques.
* P10017
* 09/25/2021
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

typedef vector<int> vi;    // vector if ints
typedef pair<int, int> ii; // pair of ints
typedef vector<ii> vii;    // vector of pairs
typedef vector<vi> vvi;    // vector of vector of ints


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int>s[3];
int RODS = 3;

int moves,
    m;

/**
 *  
 * Using this function to display the results.
 * 
 */
void print()
{
    cout << endl;
    for (int i = 0; i < RODS; i++)
    {
        if (i == 0)
            cout << "A=>";
        if (i == 1)
            cout << "B=>";
        if (i == 2)
            cout << "C=>";

        for (int j = 0; j < s[i].size(); j++)
        {
            if (s[i].size() == 0)
                break;
            if (j == 0)
                cout << "  ";
            cout << " " << s[i][j];
        }
        cout << endl;
    }
}

void towerofHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        s[to_rod].push_back(s[from_rod].back());
        s[from_rod].pop_back();
        m++;

        if (m <= moves)
        {
            print();
        }
        if (m > moves)
        {
            return;
        }
        return;
    }
    else
    {
        towerofHanoi(n - 1, from_rod, aux_rod, to_rod);
        
        s[to_rod].push_back(s[from_rod].back());
        s[from_rod].pop_back();
        m++;
        if (m <= moves)
        {
            print();
        }
        if (m > moves)
        {
            return;
        }
        towerofHanoi(n - 1, aux_rod, to_rod, from_rod);
    }
}

int main() 
{
    int n;      // number of disks
    int problem = 1;

    while (cin >> n >> moves && n != 0)
    { 
        cout << "Problem #" << problem << endl;
        m = 0;
        
        // all disks start in 0 rod
        for (int i = n; i > 0; i--)
        {
            s[0].push_back(i);
        }

        // print initial set up
        print();
        towerofHanoi(n, 0, 2, 1);

        for (int i = 0; i < 3; i++)
            s[i].clear();
        
        problem++;
        cout << endl;
    }
    return 0;
}
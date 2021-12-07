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
#include <string>

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
    int T;
    string temp;
    
    cin >> T;
    
    while (T--)
    {
        cin >> temp;
        
        if (temp.length() == 5)
            cout << "3\n";
        
        else
        {
            int oneCorrect(0);
            
            if (temp[0] == 'o')
                ++oneCorrect;
            
            if (temp[1] == 'n')
                ++oneCorrect;
                
            if (temp[2] == 'e')
                ++oneCorrect;
            
            if (oneCorrect >= 2)
                cout << "1\n";
            else
                cout << "2\n";
        
        }
    
    }

}
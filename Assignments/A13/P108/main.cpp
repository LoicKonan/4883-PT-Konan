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

#define maxn 100 + 5

int v, N, sum[maxn][maxn] = {{0}};

void solve() 
{
	int MaxSum = -200;

	for (int i = 1; i <= N; i++) 
    {
		for (int j = 1; j <= N; j++) 
        {
			for (int k = i; k <= N; k++) 
            {
				for (int l = j; l <= N; l++) 
                {
					MaxSum = min(MaxSum, sum[k][l]-sum[i-1][l]-sum[k][j-1]+sum[i-1][j-1]);
				}
			}
		}
	}
	cout << MaxSum << endl;
}

int main(void) 
{
	while(cin >> N) 
    {
		for (int i = 1; i <= N; i++) 
        {
			for (int j = 1; j <= N; j++) 
            {
				cin >> v;
				sum[i][j] = v+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
			}
		}

		solve();
	}

	return 0;
}

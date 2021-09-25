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

int n, m;
int cl, fl;
int v[250];
vector<int> g[250];

bool check(int number);

int main()
{
	int t;
	cin >> t;
	while (t-- && cin >> n >> m)
	{
		REP(i, n)
		g[i].clear();
		while (m--)
		{
			int a, b;
			cin >> a >> b;
			g[a].pb(b);
			g[b].pb(a);
		}
		memset(v, 0, sizeof(v));

		int ans = 0;
		REP(i, n)
		if (!v[i])
		{
			fl = cl = 0;
			v[i] = 1;
			if (!check(i))
			{
				ans = -1;
				break;
			}
			ans += max(min(cl, fl - cl), 1);
		}
		cout << ans << endl;
	}
	return 0;
}

bool check(int number)
{
	fl++;
	if (v[number] == 1) cl++;
	for (int i = 0; i < g[number].size(); i++)
	{
		int x = g[number][i];
		if (v[x] == v[number])  return false;

		if (v[x] == 3 - v[number]) continue;
		
		v[x] = 3 - v[number];
		if (!check(x)) return false;
		
	}
	return true;
}
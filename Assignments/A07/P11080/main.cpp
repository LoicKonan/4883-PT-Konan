/**
* Loic Konan
* 4883 - Programming Techniques.
* P11080
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

int junctions; // the number of junctions.
int streets;   // the number of streets.
int f, t;	   // f and t denoting that thereis a street betweenfandt
int v[250];
vector<int> g[250];

bool isBipartite(int number);

int main()
{
	int test_cases; // integer T(T < 80)indicate the number of test cases.
	cin >> test_cases;
	while (test_cases-- && cin >> junctions >> streets)
	{
		REP(i, junctions)
		g[i].clear(); // Clear the vector.
		while (streets--)
		{
			int input_one, input_two;
			cin >> input_one >> input_two; // Read in the inputs.

			g[input_one].pb(input_two);
			g[input_two].pb(input_one);
		}
		memset(v, 0, sizeof(v)); // to set all values as 0 for integral data types.

		int minimum = 0; // Minimum number of guards needed to guard all the junctions and streets.
		REP(i, junctions)
		if (!v[i])
		{
			f = t = 0;
			v[i] = 1;
			if (!isBipartite(i))
			{
				minimum = -1; // Setting as ‘-1’ if it is impossible to place the guards without fighting.
				break;
			}
			minimum += max(min(t, f - t), 1);
		}
		cout << minimum << endl; // Displaying the results.
	}
	return 0;
}

bool isBipartite(int number)
{
	f++; // Increment f.
	if (v[number] == 1) t++; // Increment t.

	for (int i = 0; i < g[number].size(); i++)
	{
		int x = g[number][i];
		if (v[x] == v[number]) return false; // if they equal return false.

		if (v[x] == 3 - v[number]) continue;

		v[x] = 3 - v[number];
		if (!isBipartite(x)) return false;
	}
	return true;
}
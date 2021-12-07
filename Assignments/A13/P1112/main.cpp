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


#define infinity 1 << 30
#define mx 10000

vector<int> g[mx], cost[mx];

struct node
{
    int u;
    int cost;

    node(int _u, int _cost)
    {

        u = _u;

        cost = _cost;
    }

    bool operator<(const node &p) const
    {
        return cost > p.cost;
    }
};


void reset()
{
    for (int i = 0; i < mx; i++)

    {
        g[i].clear();

        cost[i].clear();
    }
}

void dijstkra(int n, vector<int> g[], vector<int> cost[], int source, int time, int k, int t)
{
    int distance[n + 1];

    for (int i = 1; i <= n; i++)
    {

        distance[i] = infinity;
    }

    priority_queue<node> q;

    q.push(node(source, 0));
    distance[source] = 0;

    while (!q.empty())
    {
        node top = q.top();

        q.pop();

        int u = top.u;

        for (int i = 0; i < (int)g[u].size(); i++)
        {
            int v = g[u][i];

            if (distance[u] + cost[u][i] < distance[v])
            {
                distance[v] = distance[u] + cost[u][i];
                q.push(node(v, distance[v]));
            }
        }
    }

    int cn = 0;

    for (int i = 1; i <= n; i++)
    {
        if (distance[i] <= time)
            cn++;
    }

    cout << cn << endl;

    if (k != t - 1)
        cout << endl;
}

int main()
{
    int numNodes, numEdges, t, exit, time, k;

    cin >> t;

    for (k = 0; k < t; k++)
    {
        reset();

        cin >> numNodes >> exit >> time >> numEdges;

        for (int i = 0; i < numEdges; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        dijstkra(numNodes, g, cost, exit, time, k, t);
    }
}
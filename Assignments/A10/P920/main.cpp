/**
* Loic Konan
* 4883 - Programming Techniques.
* P920
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
#include <iomanip>

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

struct point;

int c, n;

vector<point> points;

int x, y;

struct point
{
    int x, y;

    point() : x{0}, y{0} {}
    point(int x, int y) : x{x}, y{y} {}
};

bool comparisons(point &a, point &b)
{
    return a.x < b.x;
}

void printPoints()
{
    for (int i = 0; i < points.size(); i++)
    {
        cout << "(" << points[i].x << "," << points[i].y << ")"
             << " ";
    }
    cout << endl;
}

int main()
{
    cin >> c;

    while (c--)
    {
        cin >> n;

        while (n--)
        {
            cin >> x >> y;

            points.push_back(point(x, y));
        }

        sort(points.begin(), points.end(), comparisons);

        int max = 0;
        double distance = 0;
        double sum = 0;
        
        for (int i = points.size() - 1; i >= 0; i--)
        {
            if (points[i].y > max)
            {
                distance = sqrt(pow(points[i].x - points[i + 1].x, 2) + pow(points[i].y - points[i + 1].y, 2));
                sum += distance * (points[i].y - max) / (points[i].y - points[i + 1].y);
                max = points[i].y;
            }
        }
        cout << fixed << setprecision(2) << sum << endl;
        points.clear();
    }

    cout << endl;
}

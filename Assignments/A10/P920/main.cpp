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
#define maximumN 10000
using namespace std;
#define endl "\n"

typedef vector<int> vi;    // vector if ints
typedef pair<int, int> ii; // pair of ints
typedef vector<ii> vii;    // vector of pairs
typedef vector<vi> vvi;    // vector of vector of ints

struct point;
int test_cases, n, x, y;                                     // Global variables 
vector<point> points;                                        // Prototype for the vector of points


struct point
{
    int x, y;

    point() : x{0}, y{0} {}                                  // Default Constructor
    point(int x, int y) : x{x}, y{y} {}                      // User define Constructor
};

bool comparisons(point &a, point &b)                         // Using this function to compare the points
{
    return a.x < b.x;
}

int main()
{
    cin >> test_cases;                                      // Read in the number of test_cases.

    while (test_cases--)
    {
        cin >> n;                                           // Read in the number of coordinate pairs

        while (n--)                                         // decrement after every loop. 
        {
            cin >> x >> y;                                  // Read in the x and y coordinates.
            points.push_back(point(x, y));                  // Add to our vector point.
        }

        sort(points.begin(), points.end(), comparisons);    // Sort the points.

        int maximum = 0;
        double distance = 0;
        double length = 0;

        for (int i = points.size() - 1; i >= 0; i--)
        {
            if (points[i].y > maximum)
            {
                distance = sqrt(pow(points[i].x - points[i + 1].x, 2) + pow(points[i].y - points[i + 1].y, 2));
                length += distance * (points[i].y - maximum) / (points[i].y - points[i + 1].y);
                maximum = points[i].y;
            }
        }
        cout << fixed << setprecision(2) << length << endl;   // Print with two decimal digits.
        points.clear();                                       // Clear the vector
    }
}

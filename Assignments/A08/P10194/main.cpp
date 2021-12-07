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


struct team 
{
    char name[105];
    int pt, win, lose, tie, score, invscore;
    void init() {
        pt = win = lose = tie = 0;
        score = invscore = 0;
    }
    void record(int a, int b) 
    {
        if(a > b)   win++, pt += 3;
        else if(a < b)  lose++;
        else    tie++, pt++;
        score += a, invscore += b;
    }
};
bool cmp(team a, team b) 
{
    if(a.pt != b.pt)    return a.pt > b.pt;
    if(a.win != b.win)  return a.win > b.win;
    if(a.score-a.invscore != b.score-b.invscore)
        return a.score-a.invscore > b.score-b.invscore;
    if(a.score != b.score)
        return a.score > b.score;
    if(a.win+a.lose+a.tie != b.win+b.lose+b.tie)
        return a.win+a.lose+a.tie < b.win+b.lose+b.tie;
    return strcasecmp(a.name, b.name) < 0;
}

int main(int argc, char **argv)
{
    while (true)
    {

        
    }
    return 0;
}
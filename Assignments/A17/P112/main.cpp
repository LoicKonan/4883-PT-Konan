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


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN 1000

int main()
{
    char ch, ch1, ch2, ch3, ch4;
    int digit[MAXN];
    int left, right, num, sum, flag, cnt, start, rear, success, fuhao;
    
    while(scanf("%d", &num) != EOF)
    {
        memset(digit, 0, sizeof(digit));
        rear = left = right = sum = flag = cnt = 0;
        start = 1, success = 0, fuhao = 1;
        ch1 = ch2 = ch3 = ch4 = '?';
        while(left != right || start)
        {
            scanf("%c", &ch);
            if(isdigit(ch) || ch == '(' || ch == ')' || ch == '-')
            {
                 if(isdigit(ch) || ch == '-')
                {
                    if(isdigit(ch))
                    digit[rear] = digit[rear]*10 + (ch - '0');
                    else fuhao = -1;
                    flag = 1;
                }
                else if(flag)
                 {
                     flag = 0;
                     digit[rear] = fuhao*digit[rear];
                     sum += digit[rear]; 
                     fuhao = 1;
                     rear++;
                 }
                
                ch4 = ch3, ch3 = ch2, ch2 = ch1, ch1 = ch;
                if(ch4 == '(' && ch3 == ')' && ch2 == '(' && ch1 == ')')
                {
                    if(sum == num) 
                    {
                        success = 1;
                    }
                    ch4 = ch3 = ch2 = ch1 = '?';
                }
                else if(ch2 != '(' && ch1 == ')')
                {
                    sum -= digit[rear-1];
                    digit[rear-1] = 0;
                    rear--;
                }
                if(ch == '(') left++;
                else if(ch == ')') right++;
                if(left != right) start = 0;
            }
            
        }
        if(success) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
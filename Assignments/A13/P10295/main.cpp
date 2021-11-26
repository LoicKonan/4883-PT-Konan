/**
* Loic Konan
* 4883 - Programming Techniques.
* P10295
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

int main()
{
    uint64 Total;                                   // Unsigned long long for the the total salary.

    map<string, int> dictionary;                    // Declaring Map to be of <string, int> type.
    
    int numb_Job_Descripiton;                       // The number of Job Descriptions.
    int numb_Paragraph;                             // The number of Paragraphs.

    cin >> numb_Job_Descripiton >> numb_Paragraph;  // Read in the values for the number Job Descripiton and number of Paragraphs.
    
    /**
     * Using this first loop to solve the first 
     * part of the problem. To loop through
     * the job description and the salaries in front.
     */
    REP(i, numb_Job_Descripiton)                    // For i less than the number of Jobs Descripitons.                                
    {
        string job;                                 // The job descriptions.
        int salary;                                 
        cin >> job >> salary;                       // Read in the job descriptions and salaries.
        dictionary[job] = salary;                   
    }
    
    /**
     * This second loop will loop through 
     * the paragraphs and add the salaries
     * and display it.
     */
    REP(i, numb_Paragraph)                          // For i less than the number of number of Paragraphs.         
    {
        Total = 0;                                  // Set the Total number of salaries to zero.
        string text;                                // The words in the paragraphs.
        while (cin >> text, text != ".")            // Read in the Text until the period.
              Total += dictionary[text];            // Computing the salary as the sum of the Hay Point values
                                                    // for all words that appear in the description.
        cout << Total << endl;                      // Display the salaries computed.
    }
    return 0;
}
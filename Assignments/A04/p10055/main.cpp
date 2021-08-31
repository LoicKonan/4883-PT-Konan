/**
* Loic Konan
* 4883 - Programming Techniques.
* P10055
* 08/29/2021
*/

#include <iostream>
using namespace std;

// This gave me a run time of 0.12 seconds.
int main() 
{
    long long A, B;
    
    while (cin >> A >> B) 
    {
      cout << abs(A-B) << '\n';
    }
    return 0;
}
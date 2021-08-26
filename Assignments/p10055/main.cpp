/**
* Loic Konan
* 4883 - Programming Techniques.
* P10055
* 08/29/2021
*/

#include <iostream>
#define endl "\n"
using namespace std;

int main() 
{
    // int B = 0, A = 0;
    long long A,B;
    
    while (cin >> A >> B) 
    {
      cout << abs(A-B) << "\n";
    }
    return 0;
}
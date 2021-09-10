/**
* Loic Konan
* 4883 - Programming Techniques.
* P10038
* 09/9/2021
*/

#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Credit to Dr.Griffin 
 * Shortcut the #define.
 */

#define REP(i, n) for (int i = 0; i < n; i++) // simple 0=>N for
#define int64 long long

int main()
{
    int64 n_Input,          // Number of input per line <= 3000.
        difference,         // absolutes values of the difference between successive elements.
        first_Number,       // First integer(or the current integer).
        second_Number,      // second integer(or the next or following integer).
        array[3010];        // An array that will hold more than 3000 integers.
                            // since we know that the Number of input per line <= 3000.

    while (cin >> n_Input)  // Read in the number of input as long as it > 0.
    {
        difference = 0;
        second_Number = 0;
        bool check = false; // a boolean to check whenever it jolly or not.

        REP(i, n_Input)     // Iterate through our inputs in a cool way.
        {
            cin >> first_Number;                            // Read in our first number.
            difference = abs(first_Number - second_Number); // Store the absolute values of the difference bettween
                                                            // the first number and the following number in this variable.
            if (i > 0)                                      // when i from our loop is greater than 0,
            {
                array[i - 1] = difference; // Store the value of the absolute value in this element of our array.
            }
            second_Number = first_Number; // Now store the value of the first number in the following number.
        }

        sort(array, (array + n_Input - 1));                    // Sort our array

        REP(i, n_Input - 1)                                    // itterate through our inputs - 1.
        {                                                      // If my array does not ended up with all 1's,
            if (array[0] != 1 || array[i] - array[i - 1] != 1) // I don't have jolly jumper.
            {
                check = true;                                  // Since this is true, jump to the else and print not Jolly.
                break;
            }
        }
        if (!check)  cout << "Jolly" << endl;                   // Print jolly.
        else         cout << "Not jolly" << endl;               // Print not jolly.
    }
    return 0;
}
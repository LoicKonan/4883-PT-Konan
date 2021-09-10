/**
* Loic Konan
* 4883 - Programming Techniques.
* P10038
* 09/9/2021
*/

#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n_Input;        // Number of input per line <= 3000
    int difference;     // absolutes values of the difference between successive elements 
    int first_Number;   // 
    int second_Number;  // 
    int array[3005];    // An array that will hold more than 3000 integers
                        // since we know that the Number of input per line <= 3000.
    bool fail = false;  // a boolean to check whenever it jolly or not.

    while(cin >> n_Input)   //
    {
        second_Number = 0;  //
        for(int i = 0; i < n_Input; i++)
        {
            cin >> first_Number;    //
            difference = abs(first_Number - second_Number); 
            if(i > 0)   //
            {
                array[i - 1] = difference;  //
                cout << difference << " ";  // to debug. 
            }
            second_Number = first_Number;   //
        }

        sort(array,(array + n_Input - 1));  //

        for(int i = 1; i < n_Input - 1; i++)
            {                                  //
                if(array[i] - array[i-1] != 1||array[0] != 1)   
                {
                    fail = true;
                    break;
                }
            }
        if(!fail)                       //
            cout << "Jolly\n";
        else                            //
            cout << "not jolly\n";
    }
    return 0;
}

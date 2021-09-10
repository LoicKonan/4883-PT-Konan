#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n_Input,        // Number of input per line <= 3000
    difference,         // abs values of the difference between successive elements 
    m,
    x,
    f,
    mx,
    array[3005];        // An array that will hold more than 3000 integers
                        // since we know that the Number of input per line <= 3000

    bool fail = false;

    while(cin >> n_Input)
    {
        x = 0;
        f = 0;
        mx =-1;
        for(int i = 0; i < n_Input; i++)
        {
            cin >> m;
            difference = abs(m - x);
            if(i > 0)
            {
                array[i - 1] = difference;
                cout << difference << " ";
            }
            x = m;
        }
        sort(array,(array + n_Input - 1));
        for(int i = 1; i < n_Input - 1; i++)
            {
                if(array[i] - array[i-1] != 1||array[0] != 1)
                {
                    fail = true;
                    break;
                }
            }
        if(!fail)
            cout << "Jolly\n";
        else
            cout << "not jolly\n";
    }
    return 0;
}

/**
* Loic Konan
* 4883 - Programming Techniques.
* P161
* 09/7/2021
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

// Function prototype.
void TimeDisplay(int seconds);

int main()
{
  int Time;    // Declare the variable to be use.
  cin >> Time; // Read in each individual time in.

  while (true) // While our Time is not 0.
  {
    vector<int> Series_Of_Integers; // Create a vector of integers that will hold our series of integers.
    while (Time)                    // While Time is not 0.
    {
      Series_Of_Integers.push_back(Time); // While our individual Time is not 0 add it to the back of our vector.
      cin >> Time;                        // Read in the next Time in.
    }

    bool fail_Sync = true; // boolean for the fail to synchronize.

    // Find the time at which all lights synchronize or fail.
    // Finds the smallest element in the range of our vector multiply by 2.
    // and if it is less than and equal to 5 hours(which is 18000 seconds).
    for (int j = (*min_element(Series_Of_Integers.begin(), Series_Of_Integers.end())) * 2; j <= 18000; j++)
    {
      bool light_Green = true; // boolean for the green light.

      // Looping through our vector of integers.
      for (int i = 0; i < Series_Of_Integers.size(); i++)
      {
        // Let i be the waiting time for a light.
        // If (j % 2i) >= (i-5), then the light isn't green at time j.
        if (j % (Series_Of_Integers[i] * 2) >= (Series_Of_Integers[i]) - 5)
        {
          light_Green = false; // The light is not green because the (Time % 2i) is not greater or equal to (i-5)
          break;
        }
      }

      if (light_Green) // if We have a green light.
      {                // The fail to synchronise will therefore be false.
        fail_Sync = false;
        TimeDisplay(j); // Now display the time format.
        break;
      }
    }

    if (fail_Sync) // If the fail to synchronize is true,then display that message below.
    {
      cout << "Signals fail to synchronise in 5 hours\n";
    }

    cin >> Time; // Read in Time.
  }
  return 0;
}

void TimeDisplay(int seconds)
{                            // Display in a nice format.
  int hour = seconds / 3600; // Convert seconds to hours, minutes and seconds.
  seconds = seconds % 3600;
  int min = seconds / 60;
  seconds = seconds % 60;
  cout << setfill('0');
  cout << setw(2) << hour << ':';
  cout << setw(2) << min << ':';
  cout << setw(2) << seconds << "\n";
}
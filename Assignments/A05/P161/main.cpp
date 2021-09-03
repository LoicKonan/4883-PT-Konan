#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

#define INF 1<<30

int main() 
{
	while (true) 
    {
		int I;
		vector< int > V(2);
		
		cin >> V[0] >> V[1];
		while (cin >> I && I != 0) V.push_back(I);
		if (V.size() == 2 && !V[0] && !V[1]) break;
		
		int N = V.size();
		int Min = *min_element(V.begin(), V.end()) - 5;
		bool flag = false;
		
		for (int i = Min; i <= 18000; i++) 
        {
			int Cnt = 0;
			for (int j = 0; j < N; j++) 
            {
				if (i % (2 * V[j]) < V[j] - 5) ++Cnt;
				else break;
			}
			if (Cnt == N) 
            {
				int seconds = i % 60; i /= 60;
				int minutes = i % 60; i /= 60;
				int hours = i % 24;
				cout << "n", hours, minutes, seconds;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "Signals fail to synchronise in 5 hours\n";
	}
	return 0;
}
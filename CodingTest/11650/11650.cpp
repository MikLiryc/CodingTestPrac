#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;
	vector<pair<int, int>> C;
	for (int i = 0; i < T; i++)
	{
		int X, Y;
		cin >> X >> Y;
		C.push_back(make_pair(X, Y));
	}

	sort(C.begin(), C.end());

	for (int i = 1; i < T;)
	{
		if (C[i - 1].first == C[i].first)
		{
			if (C[i - 1].second > C[i].second)
			{
				pair<int, int> temp = C[i - 1];
				C[i - 1] = C[i];
				C[i] = temp;
			}
			else i++;
		}
		else i++;
	}
	
	for (int i = 0; i < T; i++)
	{
		cout << C[i].first << " " << C[i].second << "\n";
	}
}
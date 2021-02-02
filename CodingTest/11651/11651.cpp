#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<pair<int, int>> C;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int X, Y;
		cin >> X >> Y;
		C.push_back(make_pair(Y, X));
	}
	sort(C.begin(), C.end());

	for (int i = 1; i < T;)
	{
		if (C[i - 1].first == C[i].first)
		{
			if (C[i - 1].second > C[i].second)
			{
				int temp;
				temp = C[i - 1].second;
				C[i - 1].second = C[i].second;
				C[i].second = temp;
			}
			else i++;
		}
		else i++;
	}

	for (auto it : C)
	{
		cout << it.second << " " << it.first << "\n";
	}
}
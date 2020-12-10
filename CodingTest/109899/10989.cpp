#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	int N[10001] = {};

	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		N[n]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (N[i] != 0)
		{
			for (int j = 0; j < N[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}
}
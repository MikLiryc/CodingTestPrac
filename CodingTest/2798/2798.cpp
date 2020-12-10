#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	vector<int> cards;

	int N, max;

	cin >> N >> max;

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		cards.push_back(n);
	}

	int min = 100000;
	int answer;
	for (int i = 0; i < cards.size(); i++)
	{
		for (int j = 1; j < cards.size(); j++)
		{
			if (i != j)
			{
				for (int t = 2; t < cards.size(); t++)
				{
					if (t != j && t != i)
					{
						int temp = cards[i] + cards[j] + cards[t];
						if (max - temp < min && max - temp >= 0)
						{
							min = max - temp;
							answer = temp;
						}
					}
				}
			}
		}
	}

	cout << answer << "\n";
}
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<pair<int, int>> people;
	vector<int> rank;

	int TC;
	cin >> TC;

	for (int i = 0; i < TC; i++)
	{
		int weight, height;
		cin >> weight >> height;
		people.push_back(make_pair(weight, height));
		rank.push_back(1);
	}

	for (int i = 0; i < TC; i++)
	{
		for (int j = 0; j < TC; j++)
		{
			if (i != j)
			{
				if (people[i].first < people[j].first
					&& people[i].second < people[j].second)
				{
					rank[i]++;
				}
			}
		}
	}


	for (int i = 0; i < TC; i++)
	{
		cout << rank[i] << " ";
	}
}
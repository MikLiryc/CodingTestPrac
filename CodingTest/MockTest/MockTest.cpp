#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{

	return 0;
}

vector<int> solution(vector<int> answers) {
	vector<int> answer;

	vector<vector<int>> map(3);
	map[0] = { 1, 2, 3, 4, 5 };
	map[1] = { 2, 1, 2, 3, 2, 4, 2, 5 };
	map[2] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

	vector<int> num(3, 0);

	for (int idx = 0; idx < 3; idx++)
	{
		for (int i = 0; i < answers.size(); i++)
		{
			if (answers[i] == map[idx][i % map[idx].size()])
			{
				num[idx]++;
			}
		}
	}
	sort(num.begin(), num.end(), greater<int>());

	for (int i = 0; i < 3; i++)
	{
		if (num[i] == num[0])
		{
			answer.push_back(i + 1);
		}
	}

	cout << endl;

	return answer;
}
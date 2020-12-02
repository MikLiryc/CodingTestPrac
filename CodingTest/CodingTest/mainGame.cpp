#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	
	return 0;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (int i = 0; i < commands.size(); i++)
	{
		vector<int> a;
		int size = commands[i][1] - commands[i][0] + 1;
		for (int j = 0; j < size; j++)
		{
			a.push_back(array[commands[i][0] - 1 + j]);
		}
		sort(a.begin(), a.end());
		answer.push_back(a[commands[i][2] - 1]);
	}
	
	return answer;
}
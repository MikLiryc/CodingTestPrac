#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

unordered_map<int, int> map;

int Average(vector<int> n)
{
	double sum = 0;
	for (int i = 0; i < n.size(); i++)
	{
		sum += n[i];
	}
	double size = n.size();
	double avg = sum / size;
	if (avg > 0)
	{
		avg += 0.5f;
	}
	else avg -= 0.5f;
	return (int)avg;
}

int Center(vector<int> n)
{
	return n[n.size() / 2];
}

int Relevant(vector<int> n)
{
	if (n.size() == 1) return n[0];

	int max = 0;
	vector<int> vRel;
	for (auto it : map)
	{
		if (it.second > max)
		{
			max = it.second;
		}
	}

	for (auto it : map)
	{
		if (it.second == max)
		{
			vRel.push_back(it.first);
		}
	}
	if (vRel.size() == 1) return vRel[0];
	sort(vRel.begin(), vRel.end());
	return vRel[1];
}

int Range(vector<int> n)
{
	if (n.size() == 1) return 0;
	int max = -4000;
	int min = 4000;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] > max) max = n[i];
		if (n[i] < min) min = n[i];
	}

	int range = max - min;
	return range;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	vector<int> num;

	for (int i = 0; i < T; i++)
	{
		int a;
		cin >> a;
		num.push_back(a);

		if (map[a] >= 0) map[a]++;
		else map.emplace(a, 0);
	}
	sort(num.begin(), num.end());

	cout << Average(num) << "\n";
	cout << Center(num) << "\n";
	cout << Relevant(num) << "\n";
	cout << Range(num) << "\n";
}
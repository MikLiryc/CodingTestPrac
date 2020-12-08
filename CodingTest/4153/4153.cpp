#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<int> vec;
	do
	{
		if (!vec.empty()) vec.clear();
		for (int i = 0; i < 3; i++)
		{
			int t;
			cin >> t;
			vec.push_back(t);
		}
		if (!(vec[0] + vec[1] + vec[2])) break;

		sort(vec.begin(), vec.end());
		

		if (vec[2] * vec[2] == (vec[1] * vec[1] + vec[0] * vec[0])) cout << "right" << "\n";
		else cout << "wrong" << "\n";
	} while (true);
}
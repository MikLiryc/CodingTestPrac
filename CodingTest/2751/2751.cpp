//sort 함수 사용
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	vector<int> N;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		N.push_back(n);
	}

	sort(N.begin(), N.end());

	for (int i = 0; i < T; i++)
	{
		cout << N[i] << "\n";
	}
}
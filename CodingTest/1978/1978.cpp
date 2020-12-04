#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findPrimeNum(int num);

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<int> numbers;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a != 1 && findPrimeNum(a) != 0)
		{
			numbers.push_back(a);
		}
	}

	cout << numbers.size() << "\n";
}

int findPrimeNum(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}

	return num;
}
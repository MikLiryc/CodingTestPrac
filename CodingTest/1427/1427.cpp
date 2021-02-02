#include <iostream>
#include <vector>
using namespace std;

//카운팅 정렬
int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int N;
	cin >> N;

	vector<int> num;
	vector<int> Counting;
	for (int i = 0; i < 10; i++)
	{
		Counting.push_back(0);
	}

	int n = N;
	do
	{
		num.push_back(n % 10);
		Counting[n % 10]++;
		n /= 10;
	} while (n > 0);

	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < Counting[i]; j++)
		{
			cout << i;
		}
	}
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//sort 알고리즘 사용
int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int N;
	cin >> N;

	vector<int> num;

	int n = N;
	do
	{
		num.push_back(n % 10);
		n /= 10;
	} while (n > 0);

	sort(num.begin(), num.end(), greater<int>());

	for (auto it : num)
	{
		cout << it;
	}
}
*/
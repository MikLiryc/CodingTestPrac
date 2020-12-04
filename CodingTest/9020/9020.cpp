#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

unordered_map<int, bool> PN;
void Era(int max);
void goldbach(int n)
{
	// n 은 무조건 짝수이기 때문에, 2로 나누면 정확하게 정수로 나누어 떨어짐
	// n 을 구성하는 두 소수중 둘 사이의 간격이 가장 작은 것은 
	// 동일한 소수 2개로 이루어지는 것이므로 (4 = 2 + 2)
	// i, j 를 동일한 중간값으로 설정하고
	// n 이 나오기 위해서는 무조건 하나의 소수는 중간값 이하, 하나는 중간값 이상이어야지만 가능함
	// (8 = 3 + 5) 
	// 3 + 3 이나 3 + 2, (중간값 이하), 5 + 7, 5 + 5 (중간값 이상) 은 무조건 불가능

	// i 는 하나씩 늘리고 j 는 하나씩 줄이는 방식으로 소수검사를 진행

	int i, j;
	int mid = n / 2;

	for (i = j = mid; i <= n; i++, j --)
	{
		if (PN[i] && PN[j])
		{
			cout << j << " " << i << endl;
			return;
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	vector<int> Test;
	vector<int> pNum;
	vector<pair<int, int>> sets;

	int T;

	Era(10000);
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;

		goldbach(n);
	}
}

void Era(int max)
{
	if (max <= 1) return;

	for (int i = 2; i <= max; i++)
	{
		PN[i] = true;
	}

	for (int i = 2; i <= max; i++)
	{
		if (PN[i])
		{
			for (int j = 2 * i; j <= max; j += i)
			{
				if (PN[j])
				{
					PN[j] = false;
				}
			}
		}
	}
}
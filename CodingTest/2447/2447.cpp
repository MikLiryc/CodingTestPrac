#include <iostream>

using namespace std;

char stars[3000][3000];

void init()
{
	for (int i = 0; i < 3000; i++)
	{
		for (int j = 0; j < 3000; j++)
		{
			stars[i][j] = ' ';
		}
	}
}

void solve(int n, int x, int y)
{
	if (n == 1)
	{
		stars[x][y] = '*';
		return;
	}
	int div = n / 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
			{
				continue;
			}
			solve(div, x + (div * i), y + (div * j));
		}
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	init();
	solve(n, 0, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << stars[i][j];
		}
		cout << endl;
	}
}
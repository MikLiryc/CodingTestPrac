#include <iostream>

using namespace std;

int factorial(int n)
{
	// 0! = 1
	if (n <= 1) return 1;
	else
	{
		return n * factorial(n - 1);
	}
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int a;
	cin >> a;

	cout << factorial(a) << "\n";
}
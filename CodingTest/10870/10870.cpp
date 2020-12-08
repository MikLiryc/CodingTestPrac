#include <iostream>
using namespace std;

//피보나치
int Fibonacci(int n)
{
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	cout << Fibonacci(T) << "\n";
}
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> uMap;

int Disassemble(int n)
{
	int temp = n;
	int num;
	num = n;

	do
	{
		temp += num % 10;

		if (num / 10 == 0) return temp;
		else num /= 10;
	} while (true);
}


int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		uMap[i] = Disassemble(i);
		if (uMap[i] == N)
		{
			cout << i << "\n";
			break;
		}
		else if (i == N - 1 && uMap[i] != N)
		{
			cout << "0" << "\n";
			break;
		}
	}
}
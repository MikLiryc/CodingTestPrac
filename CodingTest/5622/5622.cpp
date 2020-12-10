#include <iostream>
#include <string>
using namespace std;


//int Replace(char a)
//{
//	if (a == 'A' || a == 'B' || a == 'C') return 3;
//	else if (a == 'D' || a == 'E' || a == 'F') return 4;
//	else if (a == 'G' || a == 'H' || a == 'I') return 5;
//	else if (a == 'J' || a == 'K' || a == 'L') return 6;
//	else if (a == 'M' || a == 'N' || a == 'O') return 7;
//	else if (a == 'P' || a == 'Q' || a == 'R' || a == 'S') return 8;
//	else if (a == 'T' || a == 'U' || a == 'V') return 9;
//	else if (a == 'W' || a == 'X' || a == 'Y' || a == 'Z') return 10;
//}

string NumPad[8] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
int Replace(char a)
{
	for (int i = 0; i < 8; i++)
	{
		if (NumPad[i].find(a) != string::npos)
		{
			return i + 3;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	string n;
	cin >> n;
	int timeSum = 0;
	for (int i = 0; i < n.length(); i++)
	{
		timeSum += Replace(n[i]);
	}

	cout << timeSum << "\n";
}
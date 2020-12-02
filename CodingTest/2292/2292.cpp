#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int num, i;
	num = n;
	i = 1;

	do
	{
		if (num - i <= 0)
		{
			break;
		}
		num -= i;
		++i;
		
	} while (true);

	int count;
	if (num % i == 0)
	{
		count = i;
	}
	else
	{
		count = num % i;
	}

	if (i % 2 == 0)
	{
		int one = 1;
		int base = i;
		for (int a = 1; a < count; a++)
		{
			one++;
			base--;	
		}
		cout << one << "/" << base << endl;
	}
	else
	{
		int one = 1;
		int base = i;
		for (int a = 1; a < count; a++)
		{
			one++;
			base--;
		}
		cout << base << "/" << one << endl;
	}

	return 0;
}
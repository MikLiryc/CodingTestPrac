#include <iostream>
#include <string>
using namespace std;

string Croatian[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

int Count(string& s)
{
	int start;
	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			if (s.find(Croatian[i]) == string::npos) break;
			//s.replace(s.begin() + s.find(Croatian[i]), s.begin() + s.find(Croatian[i]) + Croatian[i].length(), "1");
			start = s.find(Croatian[i]);
			s.replace(start, Croatian[i].length(), "1");
		}
	}
	return s.length();
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	string str;
	cin >> str;

	cout << Count(str);
}
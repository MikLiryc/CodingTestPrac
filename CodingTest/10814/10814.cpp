#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	multimap<int, string> members;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int age; string name;
		cin >> age >> name;
		members.insert(pair<int, string> (age, name));
	}

	for (auto it : members)
	{
		cout << it.first << " " << it.second << "\n";
	}
}

/*
//multimap 사용
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	multimap<int, string> members;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int age; string name;
		cin >> age >> name;
		members.insert(pair<int, string> (age, name));
	}

	for (auto it : members)
	{
		cout << it.first << " " << it.second << "\n";
	}
}
*/
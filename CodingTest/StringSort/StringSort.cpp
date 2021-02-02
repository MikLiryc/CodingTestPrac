#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num = 0;

bool StringSort(string a, string b)
{
	//���� § comparer
	//if (a[num] < b[num]) return true;
	//else if (a[num] > b[num]) return false;
	//else if (a[num] == b[num]) return a < b;

	//���׿����ڸ� �̿��� comparer
	return a[num] == b[num] ? a < b : a[num] < b[num];
}

vector<string> solution(vector<string> strings, int n) {

	num = n;
	sort(strings.begin(), strings.end(), StringSort);

	return strings;
}

int main(void)
{
	vector<string> strings = { "abce", "abcd", "cdx" };
	vector<string> a = solution(strings, 2);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
	system("Pause");
}
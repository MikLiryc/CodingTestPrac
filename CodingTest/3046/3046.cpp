#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	
	int r1, r2, avrg;
	
	cin >> r1;
	cin >> avrg;

	r2 = avrg * 2 - r1;

	cout << r2;
	return 0;
}
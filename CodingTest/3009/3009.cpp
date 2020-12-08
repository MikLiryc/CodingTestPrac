#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int x, y, x1, y1, x2, y2;

	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	if (x == x1) cout << x2 << " ";
	else if (x == x2) cout << x1 << " ";
	else cout << x << " ";

	if (y == y1) cout << y2;
	else if (y == y2) cout << y1;
	else cout << y;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<pair<int, int>> points;

	for (int i = 0; i < 3; i++)
	{
		int f, s;
		cin >> f >> s;
		points.push_back(make_pair(f, s));
	}

	int x, y;
	int idx = 0;
	int idy = 0;
	x = points[0].first;
	y = points[0].second;
	for (int i = 1; i < 3; i++)
	{
		if (x == points[i].first) idx = i;
		if (y == points[i].second) idy = i;
	}

	if (idx == 0) x = points[0].first;
	else if (idx == 1) x = points[2].first;
	else if (idx == 2) x = points[1].first;

	if (idy == 0) y = points[0].second;
	else if (idy == 1) y = points[2].second;
	else if (idy == 2) y = points[1].second;

	cout << x << " " << y;
}
*/
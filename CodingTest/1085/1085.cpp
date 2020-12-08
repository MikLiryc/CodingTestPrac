#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int x, y, w, h;
	vector<int> dist;

	cin >> x >> y >> w >> h;

	dist.push_back(x);
	dist.push_back(y);
	dist.push_back(w - x);
	dist.push_back(h - y);

	sort(dist.begin(), dist.end());

	cout << dist[0] << "\n";
}

//숏코딩
//if (x > w - x) x = w - x;
//if (y > h - y) y = h - y;
//
//cout << (x > y ? y : x) << "\n";

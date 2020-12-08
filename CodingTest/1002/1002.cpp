#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T; 
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int answer;
		//원의 중심간의 거리
		double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

		//case 1 : 내접
		if (dist == abs(r1 - r2) && dist != 0) answer = 1;
		//case 2 : 외접
		else if (dist == r1 + r2) answer = 1;
		//case 3 : 한 원이 다른 원을 포함
		else if (dist < abs(r1 - r2)) answer = 0;
		//case 4 : 두 점에서 만나는 경우
		else if (dist < r1 + r2 && dist > abs(r1 - r2)) answer = 2;
		//case 5 : 만나지 않는 경우
		else if (dist > r1 + r2) answer = 0;
		//case 6 : 두 원이 일치하는 경우
		else if (dist == 0 && r1 == r2) answer = -1;

		cout << answer << "\n";
	}
}
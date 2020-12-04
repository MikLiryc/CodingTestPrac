#include <iostream>
#include <cmath>

using namespace std;

//Fly me to the Alpha Centauri
//1    2     3       4     5       6        7      8         9
//1 -> 11 -> 111 -> 121 -> 1211 -> 1221 -> 12211 -> 12221 -> 12321

//위 순서대로 이동거리에 따라 횟수가 늘어남
//규칙 
// 1. 이동해야 할 거리가 제곱수일 경우, 12321 의 형태로 나타남 -> ex) 9 의 경우 3의 제곱수이므로 3 * 2 - 1 의 횟수를 가짐
//    2 * max - 1 의 형식으로 정리할 수 있다
//    제곱수 일때 최소 횟수로 최대의 이동거리를 가질 수 있음
//	  따라서 최소 이동횟수를 구하기 위해서 이동해야 할 거리 - 가장 근접한 제곱수 로 남은 거리를 구하고
//    남은 거리만큼 이동횟수를 더해주면 됨

// 2. 이동해야 할 거리가 제곱수보다 작거나 클 경우 (제곱수 만큼의 거리를 이동해야 할 거리에서 뺀 이후 남는 거리)
//    남은거리 = y      -     x      - max * max 
//			최종 목적지    현재 위치    최대 이동거리 (제곱수)
//    남은 횟수 = 올림 (남은 거리 / max)
//    remain = ceil (remain / max);

//https://cryptosalamander.tistory.com/25
//https://jm-park.github.io/algorithm/2018/08/01/%EB%B0%B1%EC%A4%80-1011%EB%B2%88-Fly-me-to-the-Alpha-Centauri.html


int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		double x, y;
		double move, max = 0;
		cin >> x >> y;
		while (max * max <= y - x)
		{
			max++;
		}
		max--;

		move = 2 * max - 1;

		double remain = y - x - max * max;
		remain = ceil(remain / max);
		move += remain;

		cout << move << "\n";
	}
}
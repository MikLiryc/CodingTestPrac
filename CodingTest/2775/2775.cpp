#include <iostream>
#include <vector>

using namespace std;

int cal(int floorNum, int roomNum);

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	vector<int> answer;
	for (int i = 0; i < T; i++)
	{
		int k, n;
		cin >> k >> n;
		
		// cal 함수 결과 정답 벡터에 담음
		answer.push_back(cal(k, n));
	}

	for (int i = 0; i < T; i++)
	{
		cout << answer[i] << endl;
	}
}

int cal(int floorNum, int roomNum)
{
	// 1번 방은 무조건 1 반환
	if (roomNum == 1) return 1;

	// 0층은 방 번호와 똑같은 숫자 반환
	if (floorNum == 0) return roomNum;

	// 같은 층 roomNum - 1 의 숫자는 아래층 roomNum - 1 까지의 숫자를 모두 더한 값임
	// 같은 층 roomNum - 1 + 아래층 roomNum = 현재 방의 인원 수
	// cal 함수 재귀 돌림 (0층 까지 계속 내려가게)
 	return cal(floorNum - 1, roomNum) + cal(floorNum, roomNum - 1);
}
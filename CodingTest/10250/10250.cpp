#include <iostream>
#include <vector>

using namespace std;

int AssignRoom(int maxFloor, int maxRoom, int customerNum);

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;
	
	vector<int> answer;

	for (int i = 0; i < T; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;
		answer.push_back(AssignRoom(H, W, N));
	}

	for (int i = 0; i < T; i++)
	{
		cout << answer[i] << endl;
	}
}

int AssignRoom(int maxFloor, int maxRoom, int customerNum)
{
	int currentFloor = customerNum % maxFloor;
	if (currentFloor == 0) currentFloor = maxFloor;
	currentFloor *= 100;

	int currentRoomNum = (customerNum / maxFloor);
	if (customerNum % maxFloor != 0) ++currentRoomNum;

	return currentFloor + currentRoomNum;
}

//내가 정리해놓은 곳
//나중에 까먹으면 가보기...
//https://blog.naver.com/bigbeagle/222161749295
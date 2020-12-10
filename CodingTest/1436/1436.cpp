#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	int count = 0;
	int i = 666;

	//비교용 string 666
	string s = "666";
	do
	{
		//int i 를 string 으로 변환
		string n = to_string(i);

		// n 에 s(666) 이 있으면 그 위치를 반환, 없으면 string::npos 를 반환
		// 따라서 string::npos 가 아니라면 666이 있는 숫자이므로,
		// count ++
		if (n.find(s) != string::npos) count++;

		// count 가 N 번째 가 된다면, 숫자 i 를 반환 후 while문 break
		if (count >= T) {
			cout << i << "\n"; break;
		}
		else i++;
	} while (true);
}
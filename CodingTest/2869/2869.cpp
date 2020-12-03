#include <iostream>
#include <cmath>

using namespace std;
int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int A, B, V;
	cin >> A >> B >> V;

	//달팽이가 하루에 갈수 있는 거리 = A - B
	//마지막날은 미끄러지는 걸 계산할 필요 없으므로
	//최종적으로 V - A 에 도착하고 + 1 일을 해주면 됨

	//목표 거리 V - A
	int temp = V - A;

	//V - A 에 도착하는 일수 => (V - A) / (A - B)
	int date = (V - A) / (A - B);

	//V - A 를 A - B 로 나누어 딱 떨어지지 않고 나머지가 남는다면 V - A 에 도달 할 거리가 살짝 부족한 것이므로
	//날짜 ++
	if (temp % (A - B) != 0) ++date;
	
	//마지막으로 날짜 + 1 일 하고 마무리
	cout << ++date << "\n";
}
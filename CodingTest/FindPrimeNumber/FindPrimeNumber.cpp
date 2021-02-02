#include <iostream>

using namespace std;

bool memo[1000001]{ false };

int solution(int n) {
	int answer = 0;

	for (int i = 2; i <= n; i++)
	{
		//어떤수의 배수였다면 소수가 아니므로 continue;
		if (memo[i]) continue;
		//위의 조건을 통과했다면 소수이므로 ++
		answer++;
		//해당 수의 배수는 소수가 아니므로 true 로 만듦
		for (int j = i + i; j <= n; j += i) memo[j] = true;
	}
	return answer;
}

int main(void)
{
	int n = 10;
	cout << solution(n) << endl;
	system("Pause");
}

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int solution(int n) {
    int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << "Aliquot : " << i << endl;
			answer += i;
		}
	}
    return answer;
}

int main(void)
{
	clock_t start, end;
	int n = 9;

	start = clock();
	cout << solution(n) << endl;
	end = clock();
	cout << "Time Spent : " << (double)(end - start)/CLOCKS_PER_SEC << "s" << endl;
	system("Pause");
}
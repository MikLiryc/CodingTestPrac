#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
	long long n = num;
	while (n != 1)
	{
		answer++;
		if (answer >= 500)
		{
			return -1;
		}
		if (n & 1)
		{
			n *= 3;
			n += 1;
		}
		else
		{
			n /= 2;
		}
	}

    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

	vector<int> t;
	do
	{
		t.push_back(n % 3);
		n /= 3;
	} while (n);

	int multiplier = 1;
	do
	{
		answer += t.back() * multiplier;
		t.pop_back();
		multiplier *= 3;
	} while (!t.empty());

    return answer;
}
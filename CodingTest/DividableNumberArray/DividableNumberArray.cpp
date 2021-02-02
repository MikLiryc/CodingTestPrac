#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
	sort(arr.begin(), arr.end());
	for (int a : arr)
	{
		if (a % divisor == 0)
		{
			answer.push_back(a);
		}
	}

    return answer.empty() ? vector<int>(1, -1) : answer;
}
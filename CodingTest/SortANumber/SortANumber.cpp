#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
	/*
	vector<int> v;
	do
	{
		v.push_back(n % 10);
		n /= 10;
	} while (n >= 1);

	sort(v.begin(), v.end(), greater<int>());
	
	int multi = 1;
	do
	{
		int a = v.back();
		v.pop_back();
		answer += a * multi;
		multi *= 10;
	} while (!v.empty());
	*/

	string str = to_string(n);
	sort(str.begin(), str.end(), greater<char>());
	answer = stoll(str);
    return answer;
}
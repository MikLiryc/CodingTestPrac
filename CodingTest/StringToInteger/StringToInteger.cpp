#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
	//bool isPositive = false;
	//bool isSigned = false;
	//if (s[0] == '+') {
	//	isPositive = true; isSigned = true;
	//}
	//else if (s[0] == '-') {
	//	isPositive = false; isSigned = true;
	//}
	//else isPositive = true;
	//
	//if (isSigned)
	//{
	//	s.erase(s.begin());
	//}
	answer = stoi(s);

    return answer;
}

int main(void)
{
	string s = "-1234";
	cout << "Size of String : " << sizeof(s) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << solution(s) << "  size : " << sizeof(solution(s)) << endl;
	system("Pause");
}
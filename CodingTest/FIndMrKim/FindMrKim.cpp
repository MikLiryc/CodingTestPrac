#include <string>
#include <vector>

using namespace std;

//=======  C Style =======
string solution(vector<string> seoul) {
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			char* answer = new char[1024];
			sprintf(answer, "김서방은 %d에 있다", i);

			return answer;
		}
	}
}
//=======  C++ Style =======
string solution(vector<string> seoul) {
	string answer = "";
	int idx = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
	answer = "김서방은 " + to_string(idx) + "에 있다";
	return answer;
}
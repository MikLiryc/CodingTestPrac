#include <iostream>
#include <string>
using namespace std;

bool wordCheck(string s)
{
	bool Alpha[26] = {false};					//알파벳 개수만큼 bool 배열 생성
	for (int i = 0; i < s.length(); i++)	
	{
		if (Alpha[s[i] - 97]) return false;		//true 면 이미 나왓던 알파벳이므로 false 반환
		else                                    //false면 나오지 않았던 알파벳이므로 체크 시작
		{
			char temp = s[i];
			Alpha[s[i] - 97] = true;			//방금 나온 알파벳을 true로 바꿔줌

			while (true)
			{
				if (temp != s[++i])				//현재 알파벳과 다른 알파벳이 나올 때 까지 탐색
				{
					i--;
					break;
				}
			}
		}
	}
	return true;
}
int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	int count = 0;

	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		
		if (wordCheck(s)) count++;
	}

	cout << count << "\n";
}
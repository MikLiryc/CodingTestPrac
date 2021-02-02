#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b)
{
	//길이가 짧은 순서 우선
	if (a.length() < b.length()) return true;
	else if (a.length() > b.length()) return false;
	//길이가 같다면
	else return a < b; //크기비교 (사전순으로 정렬)
}
int main(void)
{
	vector<string> S;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		S.push_back(s);
	}
	
	//직접 만든 비교식으로 sort
	sort(S.begin(), S.end(), compare);

	for (int i = 0; i < T; i++)
	{
		if (S[i] == S[i + 1] && i + 1 < T) continue;
		cout << S[i] << "\n";
	}
}
//비교식으로 sort -> 80ms

/*
//정렬 직접 구현 -> 1928ms 
//버블정렬... 느리다 ㅡㅡ
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	vector<string> S;
	unordered_map<string, bool> M;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		if (M[s]) continue;
		M[s] = true;
		S.push_back(s);
	}

	int end, cur;
	cur = 0;
	end = S.size();
	do
	{
		if (S[cur].length() == S[cur + 1].length())
		{
			if (S[cur] > S[cur + 1])
			{
				swap(S[cur], S[cur + 1]);
				cur - 1 >= 0 ? cur -= 1 : cur = cur;
			}
			else cur++;
		}
		else if (S[cur].length() > S[cur + 1].length())
		{
			swap(S[cur], S[cur + 1]);
			cur - 1 >= 0 ? cur -= 1 : cur = cur;
		}
		else cur++;
	} while (cur + 1 < end);

	cout << endl;
	cout << "================ END of Input ================" << endl;
	cout << endl;

	for (auto it : S)
	{
		cout << it << "\n";
	}
}
*/
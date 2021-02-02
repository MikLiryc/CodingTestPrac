#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string blank = " ";
    int start = 0;
    vector<string> parse;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' || i == s.length())
        {
            string temp = "";
            temp = s.substr(start, i - start);
            parse.push_back(temp);
            start = i + 1;
        }
    }
    
    for (auto b : parse)
    {
        cout << b << endl;
    }

    for (int i = 0; i < parse.size(); i++)
    {
        string t = parse[i];
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        if(i != 0) answer.append(blank);
        cout << "t.length() : " << t.length() << endl;
        for (int j = 0; j < t.length(); j++)
        {
            if (j % 2 == 0)
            {
                cout << "t[j] : " << t[j] << "  j : " << j << endl;
                transform(t.begin() + j, t.begin() + j + 1, t.begin() + j, ::toupper);
                cout << "t[j] : " << t[j] << "  j : " << j << endl;
            }
        }
        answer.append(t);
    }
    cout << "a - A : " << 'a' - 'A' << endl;

    return answer;
}

int main(void)
{
    string s = "try hello world";

    cout << solution(s) << endl;
    system("Pause");
}
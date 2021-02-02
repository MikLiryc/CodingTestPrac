#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (char a : s)
    {
        if (a != ' ') 
        {
            for (int i = 0; i < n; i++)
            {
                
                if ('a' <= a && a <= 'z')
                {
                    if (a + 1 > 'z')
                    {
                        a = 'a';
                    }
                    else
                    {
                        a++;
                    }
                }
                else if ('A' <= a && a <= 'Z')
                {
                    if (a + 1 > 'Z')
                    {
                        a = 'A';
                    }
                    else
                    {
                        a++;
                    }
                }
            }
        }
        string b = " ";
        b = a;
        answer.append(b);
    }
    return answer;
}

int main(void)
{
    string s = "AB";
    int n = 1;
    cout << solution(s, n) << endl;
    system("Pause");
}
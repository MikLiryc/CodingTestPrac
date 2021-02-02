#include <string>
#include <vector>

using namespace std;

void StepOneAndTwo(string& str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if ('A' <= c && c <= 'Z') result += tolower(c);
        else if (('a' <= c && c <= 'z') || ('0' <= c && c <= '9') || c == '-' || c == '_' || c == '.')
            result += c;
    }
    str = result;
}

void StepThree(string& str)
{
    if (str.length() < 2) return;
    string result = "";
    int idx = 0;
    while (idx < str.length())
    {
        if (idx + 1 < str.length() && (str[idx] == '.' && str[idx + 1] == '.'))
        {
            while (idx < str.length() && str[idx] == '.') idx++;
            result += '.';
        }
        else result += str[idx++];
    }
    str = result;
}

void StepFour(string& str)
{
    if (str.length() == 0) return;
    if (str[0] == '.') str = str.substr(1);
    if (str.length() >= 1 && str[str.length() - 1] == '.') str = str.substr(0, str.length() - 1);
}

void StepFive(string& str)
{
    if (str.length() == 0) str = "a";
}

void StepSix(string& str)
{
    if (str.length() < 16) return;
    str = str.substr(0, 15);
    StepFour(str);
}

void StepSeven(string& str)
{
    if (str.length() >= 3) return;
    char C = str[str.length() - 1];
    while (str.length() < 3) str += C;
}

string solution(string new_id) {
    string answer = new_id;

    StepOneAndTwo(answer);
    StepThree(answer);
    StepFour(answer);
    StepFive(answer);
    StepSix(answer);
    StepSeven(answer);

    return answer;
}
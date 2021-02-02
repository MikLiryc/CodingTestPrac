#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(char a, char b)
{
    if (('a' <= a && a <= 'z') && ('a' <= b && b <= 'z'))
    {
        return a > b;
    }
    else if (('A' <= a && a <= 'Z') && ('a' <= b && b <= 'z'))
    {
        return false;
    }
    else if (('a' <= a && a <= 'z') && ('A' <= b && b <= 'Z'))
    {
        return true;
    }
    else if (('A' <= a && a <= 'Z') && ('A' <= b && b <= 'Z'))
    {
        return a > b;
    }
}

string solution(string s) {

    //sort(s.begin(), s.end(), compare);
    sort(s.begin(), s.end(), greater<char>());

    return s;
}

int main(void)
{
    string s = "Zbcdefg";
    cout << solution(s) << endl;
    system("Pause");
}
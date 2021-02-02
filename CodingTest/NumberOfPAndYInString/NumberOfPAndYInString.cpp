#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    transform(s.begin(), s.end(), s.begin(), tolower);
    cout << s << endl;
    int pC = 0, pY = 0;
    for (char a : s)
    {
        a == 'p' ? pC++ : a == 'y' ? pY++ : 0;
    }

    return pC == pY ? true : false;
}

int main(void)
{
    string s = "pPoooyY";
    cout << boolalpha << solution(s) << endl;
}
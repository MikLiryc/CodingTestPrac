#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    if (s.length() != 4 && s.length() != 6)
    {
        return false;
    }
    for (char a : s)
    {
        if (!isdigit(a))
            return false;
    }
    return true;
}
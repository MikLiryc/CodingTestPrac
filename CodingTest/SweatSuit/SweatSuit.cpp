#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    vector<int> stud(n, 1);
    for (int i = 0; i < lost.size(); i++)
    {
        stud[lost[i] - 1]--;
    }
    for (int i = 0; i < reserve.size(); i++)
    {
        stud[reserve[i] - 1]++;
    }
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i] == 2)
        {
            if (i - 1 >= 0 && stud[i - 1] == 0)
            {
                stud[i]--;
                stud[i - 1]++;
            }
            else if (i + 1 < n && stud[i + 1] == 0)
            {
                stud[i]--;
                stud[i + 1]++;
            }
            continue;
        }
    }
    for (int i = 0; i < stud.size(); i++)
    {
        if (stud[i] > 0)
        {
            answer++;
        }
    }

    return answer;
}
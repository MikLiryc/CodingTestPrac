#include <string>
#include <vector>

using namespace std;
/*
string solution(int a, int b) {
    string answer = "";

    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string days[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    vector<vector<int>> cal;
    for (int i = 0; i < 12; i++)
    {
        vector<int> a(31, 0);
        cal.push_back(a);
    }
    int day = 5;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < months[i]; j++)
        {
            cal[i][j] = day;
            day++;
            if (day >= 7)
            {
                day = 0;
            }
        }
    }

    answer = days[cal[a - 1][b - 1]];
    return answer;
}
*/
string solution(int a, int b) {
    string answer = "";

    int months[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string days[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    for (int i = 0; i < a - 1; i++)
    {
        b += months[i];
    }
    b += 4;
    answer = days[b % 7];

    return answer;
}
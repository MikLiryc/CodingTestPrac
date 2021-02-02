#include <vector>
#include <algorithm>
using namespace std;

/*
vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int idx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (answer.empty())
        {
            answer.push_back(arr[i]);
            continue;
        }
        else if (answer[idx] == arr[i]) continue;
        answer.push_back(arr[i]);
        idx++;
    }
    return answer;
}
*/
vector<int> solution(vector<int> arr)
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}

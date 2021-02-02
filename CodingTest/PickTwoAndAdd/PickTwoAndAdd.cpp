#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool count[201] = { false, };
    sort(numbers.begin(), numbers.end());
    
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (!count[numbers[i]+numbers[j]])
            {
                count[numbers[i] + numbers[j]] = true;
                answer.push_back(numbers[i] + numbers[j]);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
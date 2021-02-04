#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string answer = "";
unordered_map<int, pair<int, int>> KeyPad;
bool isRight = false;
void Initialize()
{
    if (KeyPad.empty())
    {
        KeyPad[1] = make_pair(0, 0);
        KeyPad[2] = make_pair(0, 1);
        KeyPad[3] = make_pair(0, 2);
        KeyPad[4] = make_pair(1, 0);
        KeyPad[5] = make_pair(1, 1);
        KeyPad[6] = make_pair(1, 2);
        KeyPad[7] = make_pair(2, 0);
        KeyPad[8] = make_pair(2, 1);
        KeyPad[9] = make_pair(2, 2);
        KeyPad[0] = make_pair(3, 1);
        KeyPad[11] = make_pair(3, 0);
        KeyPad[13] = make_pair(3, 2);
    }
}
// 오른손으로 터치
void R()
{
    answer.append("R");
}
// 왼손으로 터치
void L()
{
    answer.append("L");
}
// Check Left-handed or Right-handed
void CheckLR(string hand)
{
    if (hand == "left")
    {
        isRight = false;
    }
    else if (hand == "right")
    {
        isRight = true;
    }
}
string solution(vector<int> numbers, string hand) {
    answer.clear();
    Initialize();
    CheckLR(hand);
    int curL = 11, curR = 13;
    
    cout << "isRight : " << boolalpha << isRight << endl;

    for (int n : numbers)
    {
        cout << "========" << "n : " << n << "========" << endl;
        if (n == 1 || n == 4 || n == 7)
        {
            cout << "Left" << endl;
            L();
            curL = n;
        }
        else if (n == 3 || n == 6 || n == 9)
        {
            cout << "Right" << endl;
            R();
            curR = n;
        }
        else
        {
            int disR = 0, disL = 0;
            disR = abs(KeyPad[curR].first - KeyPad[n].first) + abs(KeyPad[curR].second - KeyPad[n].second);
            disL = abs(KeyPad[curL].first - KeyPad[n].first) + abs(KeyPad[curL].second - KeyPad[n].second);

            cout << "curR : " << curR <<"  KeyPad[curR] = " << KeyPad[curR].first << ", " << KeyPad[curR].second << endl;
            cout << "curL : " << curL << "  KeyPad[curL] = " << KeyPad[curL].first << ", " << KeyPad[curL].second << endl;
            cout << "n : " << n << "  KeyPad[n] = " << KeyPad[n].first << ", " << KeyPad[n].second << endl;

            cout << "abs(KeyPad[curR].first - KeyPad[n].first) : " << abs(KeyPad[curR].first - KeyPad[n].first) << endl;
            cout << "abs(KeyPad[curR].second - KeyPad[n].second) : " << abs(KeyPad[curR].second - KeyPad[n].second) << endl;
            cout << "abs(KeyPad[curL].first - KeyPad[n].first) : " << abs(KeyPad[curL].first - KeyPad[n].first) << endl;
            cout << "abs(KeyPad[curL].second - KeyPad[n].second) : " << abs(KeyPad[curL].second - KeyPad[n].second) << endl;
            cout << "disR : " << disR << endl;
            cout << "disL : " << disL << endl;

            if (disR > disL)
            {
                cout << "disR > disL" << "    Use Left" << endl;
                L();
                curL = n;
            }
            else if (disR < disL)
            {
                cout << "disR < disL" << "    Use Right" << endl;
                R();
                curR = n;
            }
            else if (disR == disL)
            {
                cout << "disR == disL" << endl;
                if (isRight)
                {
                    cout << "Right" << endl;
                    R();
                    curR = n;
                }
                else
                {
                    cout << "Left" << endl;
                    L();
                    curL = n;
                }
            }
        }
    }
    return answer;
}

int main(void)
{
    vector<int> numb = { 7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2 };
    string h = "left";

    cout << solution(numb, h) << endl;
}
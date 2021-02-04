//GCD = Greatest Common Denominator 최대공약수
//LCM = Least Common Multiplier 최소공배수

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    // 유클리드 호제법
    int a, b, r;

    a = n;
    b = m;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    // lcm * gcd = a * b
    // lcm = (a * b) / gcd;
    answer.push_back(a);        //GCD
    answer.push_back(n * m / a);//LCM

    return answer;
}
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	double r;
	cin >> r;

	cout.precision(6);
	cout.setf(ios::fixed);
	//cout.setf(ios::showpoint);

	//유클리드 기하학
	double size = M_PI * (r * r);
	cout << size << "\n";

	//택시 기하학
	//빗변의 길이 = (반지름 ^ 2 + 반지름 ^ 2) 의 제곱근  
	double v = (r * r) * 2.0f;
	cout << v << "\n";
}
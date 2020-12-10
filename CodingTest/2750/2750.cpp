#include <iostream>
#include <vector>
using namespace std;

//벡터로 구현
//퀵정렬 구현			참조값으로 넣지 않으면 원본의 값이 변하지 않는다
void quickSort(vector<int>& data, int start, int end)
{
	if (start >= end) return;

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (i <= end && data[i] <= data[pivot]) { i++; }
		while (j > start && data[j] >= data[pivot]) { j--; }

		//i 와 j가 엇갈리면
		if (i > j)
		{
			//j와 피봇 교환
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else
		{
			//i번째와 j번째를 스왑
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	// 분할정복
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

vector<int> N;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		N.push_back(n);
	}

	quickSort(N, 0, N.size() - 1);

	for (auto it : N)
	{
		cout << it << "\n";
	}
}

/*
#include <iostream>
using namespace std;

//배열동적할당으로 구현
//퀵정렬 구현			참조값으로 넣지 않으면 원본의 값이 변하지 않는다
void quickSort(int* data, int start, int end)
{
	if (start >= end) return;

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (i <= end && data[i] <= data[pivot]) { i++; }
		while (j > start && data[j] >= data[pivot]) { j--; }

		//i 와 j가 엇갈리면
		if (i > j)
		{
			//j와 피봇 교환
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else
		{
			//i번째와 j번째를 스왑
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	// 분할정복
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int T;
	cin >> T;

	int* N = new int[T];
	for (int i = 0; i < T; i++)
	{
		cin >> N[i];
	}

	quickSort(N, 0, T - 1);

	for (int i = 0; i < T; i++)
	{
		cout << N[i] << "\n";
	}
}
*/
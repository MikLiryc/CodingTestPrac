#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> BWBW =
{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
vector<string> WBWB =
{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

vector<string> board;
int width, height;

int B_Start(int x, int y)
{
	int count = 0;
	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if (board[i][j] != BWBW[i - y][j - x])
			{
				count++;
			}
		}
	}
	return count;
}

int W_Start(int x, int y)
{
	int count = 0;
	for (int i = y; i < y + 8; i++)
	{
		for (int j = x; j < x + 8; j++)
		{
			if (board[i][j] != WBWB[i - y][j - x])
			{
				count++;
			}
		}
	}
	return count;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

	cin >> height >> width;

	for (int i = 0; i < height; i++)
	{
		string line;
		cin >> line;
		board.push_back(line);
	}

	int min_Val = 100;
	for (int i = 0; i + 8 <= height; i++)
	{
		for (int j = 0; j + 8 <= width; j++)
		{
			int smaller;
			smaller = min(B_Start(j, i), W_Start(j, i));

			if (smaller < min_Val)
			{
				min_Val = smaller;
			}
		}
	}
	cout << min_Val << "\n";
}
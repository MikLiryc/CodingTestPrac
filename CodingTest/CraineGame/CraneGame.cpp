#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
	stack<int> st;

	for (int i = 0; i < moves.size(); i++)
	{
		moves[i]--;
	}
	for (int m = 0; m < moves.size(); m++)
	{
		for (int i = 0; i < board.size(); i++)
		{
			if (board[i][moves[m]] == 0)
				continue;
			else
			{
				if (st.empty())
				{
					st.push(board[i][moves[m]]);
				}
				else
				{
					if (st.top() == board[i][moves[m]])
					{
						st.pop();
						answer += 2;
					}
					else
					{
						st.push(board[i][moves[m]]);
					}
				}
				board[i][moves[m]] = 0;
				break;
			}
		}
	}
	
    return answer;
}
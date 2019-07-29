#include"game.h"

void InitBoard(char board[][ROW],int col, int row, char set) //初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void ShowBoard(char board[][ROW], int row, int col)  //棋盘展示
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


void PlayerMove(char board[][ROW], int row, int col)   //玩家移动
{
	int x = 0;
	int y = 0;
	printf("玩家移动\n");
	while (1)
	{
		printf("请输入1-3的坐标: ");
		scanf_s("%d%d", &x, &y);

		if (x >= 1 && x <= 3 && y>=1 && y<=3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("位置已经被占");
			}
		}
		else
		{

			printf("输入错误！\n");
		}
	}
}


static int IsFull(char board[][ROW], int row, int col) //判断棋盘是否已满
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[][ROW], int row, int col)   //判断是否胜利
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];    
		}
	}

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[i][0];
		}
	}

	
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[i][i] != ' ')
	{
		return board[0][2];
	}

	if (IsFull(board,ROW, ROW)) //判断棋盘是否已满
	{
		return 'Q'; //平局
	}

	return ' ';//谁都没有赢
}

void ComputerMove(char board[][ROW], int row, int col)  //电脑移动
{
	int x = 0;
	int y = 0;

	printf("电脑移动\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
};
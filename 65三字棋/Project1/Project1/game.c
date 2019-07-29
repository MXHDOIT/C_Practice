#include"game.h"

void InitBoard(char board[][ROW],int col, int row, char set) //��ʼ������
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

void ShowBoard(char board[][ROW], int row, int col)  //����չʾ
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


void PlayerMove(char board[][ROW], int row, int col)   //����ƶ�
{
	int x = 0;
	int y = 0;
	printf("����ƶ�\n");
	while (1)
	{
		printf("������1-3������: ");
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
				printf("λ���Ѿ���ռ");
			}
		}
		else
		{

			printf("�������\n");
		}
	}
}


static int IsFull(char board[][ROW], int row, int col) //�ж������Ƿ�����
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

char IsWin(char board[][ROW], int row, int col)   //�ж��Ƿ�ʤ��
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

	if (IsFull(board,ROW, ROW)) //�ж������Ƿ�����
	{
		return 'Q'; //ƽ��
	}

	return ' ';//˭��û��Ӯ
}

void ComputerMove(char board[][ROW], int row, int col)  //�����ƶ�
{
	int x = 0;
	int y = 0;

	printf("�����ƶ�\n");
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
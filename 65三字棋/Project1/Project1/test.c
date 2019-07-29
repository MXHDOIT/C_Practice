
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("*******0.exit********\n");
	printf("*******1.play********\n");
	printf("*********************\n");
}


void game()
{
	char board[ROW][ROW] = { 0 };
	InitBoard(board, ROW, ROW, ' ');
	ShowBoard(board, ROW, ROW);
	char ret = 0;
	while (1) {
		PlayerMove(board, ROW, ROW);

		ret = IsWin(board, ROW, ROW);
		ShowBoard(board, ROW, ROW);
		if (ret != ' ')
		{
			break;
		}
		

		ComputerMove(board, ROW, ROW);

		ret = IsWin(board, ROW, ROW);
		ShowBoard(board, ROW, ROW);
		if (ret != ' ')
		{
			break;
		}
		

	}

	if (ret == 'X')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'O')
	{
		printf("����Ӯ\n");
	}
	else if(ret =='Q'){
		printf("ƽ��\n");
	}
	
}

int main()
{
	int input = 0;
	do {
		menu();
		printf("���������ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳���\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
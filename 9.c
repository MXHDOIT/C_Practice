//��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц��
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i * 2; j++)
		{
			printf(" ");
		}

		printf("%c",1);
		printf("%c", 1);
		printf("\n");
	}

	return 0;
}
//��ŵ�����ݹ飩
#include<stdio.h>

void Move(int n, char m, char q)
{	
    static int count = 0;
    count++;
	printf("��%d�����Ӵ�%c�Ƶ�%c,����%d��\n", n, m, q,count);
}

void Hanoi(int n, char x, char y, char z) //n��Բ�̣��� x�Ƶ� z�ϣ�yΪ�н�
{
	if (n == 1) //���ֻ��һ������ֱ�Ӵ� x �Ƶ� z
	{
		Move(1, x, z);
	}
	else
	{
		Hanoi(n - 1, x, z, y);//�Ȱ�n-1������ �� x �Ƶ� y ��ͨ�� z
		Move(n, x, z);
		Hanoi(n - 1, y, x, z);
	}
}



int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int count = 0;

	Hanoi(n, 'A', 'B', 'C');  //n��Բ�̣��� A �Ƶ� C�ϣ�BΪ�н�
	return 0;
}

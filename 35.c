//����3����a, b, c������С˳����� ����ָ�뷽����
#include<stdio.h>
void Swap(int* p, int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d%d%d", &a, &b, &c);

	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}

	printf("a = %d,b = %d,c = %d", a, b, c);
	return 0;
}
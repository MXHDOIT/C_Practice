//实现一个函数，可以左旋字符串中的k个字符。 ABCD左旋一个字符得到BCDA ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>
void Rotate(char* a, int k)
{
	int len = strlen(a);
	int num = k % len;
	
	char ch = 0;
	while (num--)
	{
		ch = a[0];
		for (int i = 0; i < len - 1; i++)
		{
			a[i] = a[i + 1];
		}
		a[len - 1] = ch;
	}
}

int main()
{
	
	char s[] = "ABCD";
	int k = 0;

	scanf_s("%d", &k);
	Rotate(s, k);
	printf("%s", s);

	


	return 0;
}
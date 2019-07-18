//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include<stdio.h>
int main()
{
	char c;
	int letter = 0;
	int space = 0;
	int num = 0;
	int other = 0;

	while ((c = getchar() )!= '\n')
	{
		if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		{
			letter++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			num++;
		}
		else
		{
			other++;
		}
	}

	printf("%d %d %d %d", letter, space, num, other);
	return 0;
}
#include<stdio.h>

void Replace(char*, int);
int main()
{
	char str[20] = "abc defgx yz";

	Replace(str,20);

	printf("%s\n", str);
	return 0;
}

void Replace(char* s, int lenght)
{
	int len = 0;
	int spacelen = 0;
	int i = 0;
	while (s[i] != '\0')
	{
		len++;
		if (s[i] == ' ')
			spacelen++;
		i++;
	}

	int newlen = len + spacelen * 2;
	if (newlen > lenght)
	{
		return;
	}

	int indexoflen = len - 1;
	int indexofnew = newlen - 1;

	while (indexoflen >= 0 && indexofnew > indexoflen)
	{
		if (s[indexoflen] == ' ')
		{
			s[indexofnew--] = '0';
			s[indexofnew--] = '2';
			s[indexofnew--] = '%';
		}
		else
		{
			s[indexofnew--] = s[indexoflen];
		}
		indexoflen--;
	}
}
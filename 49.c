//��дһ������reverse_string(char* string)���ݹ�ʵ�֣� ʵ�֣��������ַ����е��ַ��������С� Ҫ�󣺲���ʹ��C�������� ���ַ�����������
#include<stdio.h>
#include<stdlib.h>
void Reverse_string(char* string)
{
	if (*string == '\0')
	{
		return ;
	}
	else
	{
		Reverse_string(string+1);
		printf("%c", *string);
	}
}

int main()
{

	char *str = "abcd";

	/*char* str = (char*)malloc(sizeof(char)* 20);
	
	puts(str);*/
	Reverse_string(str);
	printf("\n");
	return 0;
}
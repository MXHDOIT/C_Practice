#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
void ReverveSwap(char* left, char* right)
{
	//assert(left != NULL); //���Բ��ǿ�ָ��
	//assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char* Reverve(char* p)
{
	int len = strlen(p);
	char* start = p;
	char* end = NULL;
	char* ret = p;
	ReverveSwap(p, p + len - 1); //���������ַ���
	while (*p)
	{
		start = p;
		while ((*p != ' ') && (*p != '\0')) //�ҵ�һ�鵥��
		{
			p++;
		}
		end = p - 1;
		ReverveSwap(start, end);//���򵥸�����
		if (*p == ' ') //�ҵ��ո�
			p++;
	}
	return ret;

}
int main()
{
	char arr[] = "student a am I";
	printf("����ǰ��%s\n", arr);
	printf("������%s\n", Reverve(arr));

	return 0;
}

//�������ְ������������ַ�: I�� V�� X�� L��C��D �� M��
//�������� 2 д�� II ����Ϊ�������е� 1��12 д�� XII ����Ϊ X + II �� 27 д��  XXVII, ��Ϊ XX + V + II ��
#include<stdio.h>
#include<assert.h>
#define SIZE 100
#define LI  1
#define LV  5
#define LX 10
#define LL 50
#define LC  100
#define LD  500
#define LM  1000

int RomanToInt(char* s)
{
	assert(s != NULL);
	int sum = 0;
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'I' && s[i + 1] == 'V')
		{
			sum += (LV - LI);
			i += 2;
		}
		else if (s[i] == 'I' && s[i + 1] == 'X')
		{
			sum += (LX - LI);
			i += 2;
		}
		else if (s[i] == 'X' && s[i + 1] == 'L')
		{
			sum += (LL - LX);
			i += 2;
		}
		else if (s[i] == 'X' && s[i + 1] == 'C')
		{
			sum += (LC - LX);
			i += 2;
		}
		else if (s[i] == 'C' && s[i + 1] == 'D')
		{
			sum += (LD - LC);
			i+= 2;
		}
		else if (s[i] == 'C' && s[i + 1] == 'M')
		{
			sum += (LM - LC);
			i += 2;
		}
		else
		{
			switch (s[i])
			{
			case 'I':sum += LI;
				break;
			case 'V':sum += LV;
				break;
			case 'X':sum += LX;
				break;
			case 'L':sum += LL;
				break;
			case 'C':sum += LC;
				break;
			case 'D':sum += LD;
				break;
			case 'M':sum += LM;
				break;
			default: printf("��������\n");
				return 0;
			}
			i++;
		}
	}

	return sum;
}

int main()
{
	char s[SIZE] = {0}; //������������������������
	int num = 0;	//���������������ת��������
	scanf_s("%s", s, sizeof(s));

	num = RomanToInt(s); //ת������

	printf("%d\n", num);
	return 0;
}
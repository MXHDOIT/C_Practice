#include<stdio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>


//�ɶԳ����ҳ����ǳɶԳ��ֵ���
int AppearOnce(int* arr, int len)
{
	int i;
	int sum = 0;
	for (i = 0; i < len; i++)
	{
		sum ^= arr[i];
	}

	return sum;
}
// 1 3 5 2 1 3 5   ʹ�� ^
int main()
{
	int arr[] = { 1,3,5,2,1,3,5 };

	printf("%d", AppearOnce(arr,strlen(arr)));
	return 0;
}

#if 0
//����(a+b)/2,��ƽ��ֵ
int Ave(int a, int b)
{
	int sum;
	sum = ((a & b) << 1) + (a ^ b);  
	int avg = sum >> 1;

	return avg;
}

int main()
{
	printf("%d", Ave(10, 16));
	return  0;
}

//value�Ķ�����λģʽ�����ҷ�ת���ֵ��

unsigned int RevervseBit(unsigned int value)
{
	unsigned int sum = 0;
	int i = 0;
	for(i = 0;i < 32;i++)
	{
		sum += ((value >> i) & 1) * pow(2, 31 - i);
		
	}

	return sum;
}

int main()
{
	unsigned int value;
	scanf_s("%u", &value);

	printf("%u", RevervseBit(value));
	return 0;
}

//��ӡ�����Ƶ�ż��λ������λ

void Function(unsigned int num)
{
	int i = 0;

	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}//ż��
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}//����
}
int main()
{
	unsigned int value = 0;
	scanf("%d", &value);
	return 0;

// 1.����1�ĸ���

int CountOneBits_1(unsigned int value);//����1��λ��:����һ
int CountOneBits_2(unsigned int value);//����1��λ����������
int main()
{
	printf("%d\n", CountOneBits_1(2));
	printf("%d\n", CountOneBits_1(-1));
	printf("%d\n", CountOneBits_1(15));
	printf("%d\n", CountOneBits_2(2));
	printf("%d\n", CountOneBits_2(-1));
	printf("%d\n", CountOneBits_2(15));
	return 0;
}

int CountOneBits_1(unsigned int value)  //����1��λ��
{
	int count = 0;//1�ĸ���

	while (value != 0)
	{
		if ((value & 1) == 1)
			count++;
		value >>= 1;
	}

	return count;
}

int CountOneBits_2(unsigned int value)
{
	int count = 0;
	while (value)
	{
		count++;
		value = value & (value - 1);
	}
	return count;
}
#endif
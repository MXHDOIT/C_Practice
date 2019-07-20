//�˽�����������໥ת��
//�˽���--��������      ===   �˽��� --��ʮ���� --��������
//������--���˽���      ===   ������ --��ʮ���� --���˽���

#include<stdio.h>
#include<math.h>

int Exchange(int n)   //�����Ʊ�˽���
{
	int sum = 0;
	int total = 0;
	int i = 0;

	while (n > 0)
	{
		sum += (n % 10) * pow(2, i++);
		n /= 10;
	}
	i = 0;
	while (sum > 0)
	{
		total += (sum % 8) * pow(10, i++);
		sum /= 8;
	}

	return total;
}


long long Exchange2(int n)  //���˽���ת��Ϊ������
{
	int sum = 0;
	int i = 0;
	long long total = 0;

	while (n > 0)
	{
		sum += (n % 10) * pow(8, i++);
		n /= 10;
	}

	i = 0;
	while (sum > 0)
	{
		total += (sum % 2) * pow(10, i++);
		sum /= 2;
	}

	return total;
}

int main()
{
	long long num1 = 0;

	int num2 = 0;

	printf("������һ�������Ƶ�����");
	scanf_s("%lld", &num1);

	printf("�������Ƶ��� %lld ת��Ϊ�˽��Ƶ� %d\n", num1, Exchange(num1));

	printf("������һ���˽��Ƶ�����");
	scanf_s("%d", &num2);

	printf("���˽��Ƶ��� %d ת��Ϊ�����Ƶ� %lld\n", num2, Exchange2(num2));

	return 0;
}
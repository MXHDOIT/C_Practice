//�й��Ŵ���ѧ�����������ġ��㾭���������һ�������ġ���Ǯ��ټ����⡱������һ��ֵǮ�壬��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ������̡�ĸ���������Σ�
#include<stdio.h>

int main()
{
	int cock = 0;//������
	int hen = 0; //����ĸ��
	int chick = 0;//����С��

	for (cock = 0; cock <= 20; cock++)
	{
		for (hen = 0; hen <= 33; hen++)
		{
			for (chick = 0; chick < 100; chick = chick + 3)
			{
				if ((5 * cock + 3 * hen + chick / 3 == 100) && (cock + hen + chick == 100))
				{
					printf("������%d��ĸ����%d��С����%d\n", cock, hen, chick);
				}
			}
		}
	}
	return 0;
}
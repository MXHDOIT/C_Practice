//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

#include<stdio.h>
#include<math.h>


int main()
{
	int i = 1; 
	int x = 0;
	int y = 0;
	
	for(i = 1; i <= 100000; i++)
	{
		x = sqrt(i+100);
		y = sqrt(i+168);
		
		if((pow(x,2) == i+100 )&&(pow(y,2) == i+168))
			printf("%d\n",i);
	}
	return 0;
 } 

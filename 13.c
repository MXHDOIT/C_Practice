//��һ���������ֽ������������磺����90, ��ӡ��90 = 2 * 3 * 3 * 5
#incldue<stdio.h>
int main()
{
	int num = 0;
	int i;
	scanf("%d",&num);
	
	for(i = 2;i <= num;i++)
	{
		whlie(i != num)
		{
			if(num%i == 0)
			{
				printf("%d*",i);
				num /= i;
			}else
			{
				break;
			}
		}
	}
	
	printf("%d",num);
	return 0;
 } 





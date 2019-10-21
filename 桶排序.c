#include<stdio.h>

void sort(int a[],int len)
{
	int i = 0;
	int j = 0;
	for(i = len-1;i >= 0 ;i--)
	{
		for(j = 1;j <= a[i];j++)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int a[11] = {0};
	int i = 0;
	int inputNum = 0;
	int len = sizeof(a)/sizeof(a[0]);
	for(i = 0;i < 5;i++)
	{
		scanf("%d",&inputNum);
		a[inputNum]++; 
	 } 
		
		sort(a,len);

	return 0;
 } 

#include<stdio.h>

#define COL 3  //列
#define ROW 3  //行

int Found(int (*a)[COL], int key)
{
	int i = 0;
	
	int j = COL - 1;

	while (i >= 0 && j < ROW)
	{
		if (a[i][j] < key)
		{
			i++;
		}

		if (a[i][j] > key)
		{
			j--;
		}

		if (a[i][j] == key)
		{
			return 1;
		}
	}

	return 0;
}
int main()
{
	int arr[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
	int key = 0;
	scanf_s("%d", &key);
	
	int flag = Found(arr, key);

	if (flag)
	{
		printf("查到了");
	}
	else
	{
		printf("并不存在");
	}
	return 0;
}



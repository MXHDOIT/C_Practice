//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//第10次落地，反弹9
#include<stdio.h>
int main()
{
	int i = 0;
	double high = 100;
	double sum = 0;
	for (i = 1; i < 10; i++)
	{
		sum += (high + high / 2.0);  //每一次下落高度与反弹高度
		high /= 2;					 //反弹高度，也就是下一次的下落高度
	}
	sum += high;            //上面所求为反弹9次的路程，还要加上第10落地的距离。此时的high是第9次反弹的距离。
	printf("%lf %lf", sum, high/2);
	return 0;
}
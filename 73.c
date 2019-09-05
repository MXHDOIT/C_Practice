#include<stdio.h>

void IsMurderer()
{
	char murderer = 0;

	for (murderer = 'A'; murderer <= 'D'; murderer++)
	{
		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
		{
			printf("%c\n", murderer);
		}
	}

	
}
int main()
{
	IsMurderer();
	return 0;
}
#include<stdio.h>

void Ranking()
{
	int A = 0,B = 0,C = 0,D = 0,E = 0;  //确定abcde他们各自的名次

	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			if (A != B)
			{
				for (C = 1; C <= 5; C++)
				{
					if (C != A && C != B)
					{
						for (D = 1; D <= 5; D++)
						{
							if (D != A && D != B && D != C)
							{
								for (E = 1; E <= 5; E++)
								{
									if (E != A && E != B && E != C && E != D)
									{
										if (((B == 2) + (A == 3)) == 1)
										{
											if (((B == 2) + (E == 4)) == 1)
											{
												if (((C == 1) + (D == 2)) == 1)
												{
													if (((C == 5) + (D == 3)) == 1)
													{
														if (((E == 4) + (A == 1)) == 1)
														{
															printf("A = %d,B = %d,C = %d,D = %d,E = %d", A, B, C, D, E);
														}
													}
												}
											}
										}
									}
								}
							}

						}
					}
				}
			}
		}
	}

}
int main()
{
	Ranking(); //比赛的名次
	return 0;
}
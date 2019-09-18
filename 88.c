//编写一个函数来查找字符串数组中的最长公共前缀。
//
//如果不存在公共前缀，返回空字符串 ""。

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//char* LongestCommonPrefix1(char** strs, int strsSize)
//{
//	int i = 0;
//	int j = 0;
//	char* s = NULL;
//	if (strsSize == 0)
//	{
//		return "";
//	}
//	else if (strsSize == 1)
//	{
//		return strs[0];
//	}
//	else
//	{
//		while (1)
//		{
//			if (strs[i][j] == '\0')
//				break;
//
//			if (strs[i][j] == strs[++i][j])
//			{
//				if (i == strsSize-1)
//				{
//					i = 0;
//					j++;
//				}
//			}
//			else
//			{
//				break;
//			}
//			
//		}
//		
//	}
//	s = (char*)malloc(j + 1);
//	assert(s != NULL);
//	s = memset(s, 0, j + 1);
//	s = strncpy(s, strs[0], j);
//
//	return s;
//}
char* longestCommonPrefix(char** strs, int strsSize) {

	
	int i = 0, j = 0;
	char* res = NULL;
	if (strsSize == 0)
		return "";
	if (strsSize == 1)
		return strs[0];
	while (1)
	{
		if (strs[i][j] == '\0')
			break;
		/*if (strs[i][j] == strs[++i][j])*/
		if(strs[i][j] == strs[i+1][j])
		{
			i++;
			if (i == strsSize - 1)
			{
				j++;
				i = 0;
			}
		}
		else
			break;
	}
	res = (char*)malloc(j + 1);
	assert(res);
	res = (char *)memset(res, 0, j + 1);
	res = strncpy(res, strs[0], j);
	return res;
}

int main()
{
	char* str[3] = { "flower","flow","flight" };
	int len = sizeof(str) / sizeof(str[0]);

	char* p = longestCommonPrefix(str, len);  //查找最长公共前缀

	printf("%s\n", p);
	return 0;
}
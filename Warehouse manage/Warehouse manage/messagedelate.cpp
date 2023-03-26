#include"all.h"
void messagedelate(goods* goods, int n)
{
	int i;
	char t[50];
	printf("输入您要进行出库货物的编码：");
	scanf("%s",t);
	for (i = 0; i < n; i++)
	{
		if (strcmp(t,goods[i].number))
		{

		}
	}
}
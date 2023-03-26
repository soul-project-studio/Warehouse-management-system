#include"all.h"
void findnumber(goods* goods, int n)
{
	int i,flag=0;
	char num[11];
	printf("请输入要查找的货物编码：");
	scanf("%s\n", num);
	for (i = 0; i < n; i++)
	{
		if (strcmp(num, goods[i].number) == 0)
		{
			printf("恭喜您查询到该货物！\n");
			printf("编码：%s\n名称：%s\n数量：%d\n单价：%lf\n总价：%lf",num, goods[i].name,goods[i].quantity,goods[i].price ,goods[i].totalValue);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("您输入的编码有误，请重新输入，谢谢！");
	}
}
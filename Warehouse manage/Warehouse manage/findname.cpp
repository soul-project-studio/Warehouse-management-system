#include"all.h"
void findname(goods* goods, int n)
{
	int i, flag = 0;
	char name[50];
	printf("请输入要查找的货物名称：");
	scanf("%s\n", name);
	for (i = 0; i < n; i++)
	{
		if (strcmp(name, goods[i].name) == 0)
		{
			printf("恭喜您查询到该货物！\n");
			printf("编码：%s\n名称：%s\n数量：%d\n单价：%lf\n总价：%lf",goods[i].number, goods[i].name, goods[i].quantity, goods[i].price, goods[i].totalValue);
			flag = 1;
		}

	}
	if (flag == 0)
	{
		printf("您输入的名称有误，请重新输入，谢谢！");
	}
}
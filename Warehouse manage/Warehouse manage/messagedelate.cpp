#include"all.h"
void messagedelate(goods* goods, int n)
{
	int i, delateNumber, flag = 0;
	char name[50];
	printf("请输入要出库的货物名称：");
	scanf("%s\n", name);
	cout << endl << "请输入出库该货物的数量：";
	cin >> delateNumber;
	for (i = 0; i < n; i++)
	{
		if (strcmp(name, goods[i].name) == 0)
		{
			if (delateNumber <= goods[i].quantity)
			{
				goods[i].quantity -= delateNumber;
				cout << "出库成功，已出库" << delateNumber << "个" << goods[i].name << "。"
					<< "剩余" << goods[i].quantity << "个" << goods[i].name << "。" << endl;
			}
			else
			{
				cout << "您输入的名称有误，请重新输入，谢谢！" << endl;
			}
			flag = 1;
		}

	}
	if (flag == 0)
	{
		printf("您输入的名称有误，请重新输入，谢谢！");
	}
}
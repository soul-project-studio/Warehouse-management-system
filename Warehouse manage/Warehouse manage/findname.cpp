#include"all.h"
void findname(goods* goods, int n)
{
	int i, flag = 0;
	char name[50];
	printf("������Ҫ���ҵĻ������ƣ�");
	scanf("%s\n", name);
	for (i = 0; i < n; i++)
	{
		if (strcmp(name, goods[i].name) == 0)
		{
			printf("��ϲ����ѯ���û��\n");
			printf("���룺%s\n���ƣ�%s\n������%d\n���ۣ�%lf\n�ܼۣ�%lf",goods[i].number, goods[i].name, goods[i].quantity, goods[i].price, goods[i].totalValue);
			flag = 1;
		}

	}
	if (flag == 0)
	{
		printf("������������������������룬лл��");
	}
}
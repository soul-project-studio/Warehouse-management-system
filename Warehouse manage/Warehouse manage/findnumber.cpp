#include"all.h"
void findnumber(goods* goods, int n)
{
	int i,flag=0;
	char num[11];
	printf("������Ҫ���ҵĻ�����룺");
	scanf("%s\n", num);
	for (i = 0; i < n; i++)
	{
		if (strcmp(num, goods[i].number) == 0)
		{
			printf("��ϲ����ѯ���û��\n");
			printf("���룺%s\n���ƣ�%s\n������%d\n���ۣ�%lf\n�ܼۣ�%lf",num, goods[i].name,goods[i].quantity,goods[i].price ,goods[i].totalValue);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("������ı����������������룬лл��");
	}
}
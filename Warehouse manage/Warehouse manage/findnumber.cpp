#include"all.h"
void findnumber(goods* goods, int n)
{
	int i,flag=0;
	char num[11];
	printf("������Ҫ���ҵĻ������:");
	scanf("%s",num);
	for (i = 0; i < n; i++)
	{
		int cmp = strcmp(num, goods[i].number);
		if (cmp==0 )
		{
			printf("��ϲ����ѯ���û��\n");
			printf("���룺%s\n���ƣ�%s\n������%d\n���ۣ�%.2lf\n�ܼۣ�%.2lf",num, goods[i].name,goods[i].quantity,goods[i].price ,goods[i].totalValue);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("������ı����������������룬лл��");
	}
}
#include"all.h"//����ͷ�ļ�
void getTotalValue(goods* goods, int n)//����һ����������ÿ��������������µ��ܼ�
{
	int i;
	for (i = 0; i < n; i++)//ͨ��ѭ�����м���
	{
		goods[i].totalValue = goods[i].price * goods[i].quantity;
	}
}
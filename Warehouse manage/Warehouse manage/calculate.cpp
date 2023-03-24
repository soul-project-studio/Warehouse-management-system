#include"all.h"
void getTotalValue(goods* goods, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		goods[i].totalValue = goods[i].price * goods[i].quantity;
	}
}
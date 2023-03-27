#include"all.h"//调用头文件
void getTotalValue(goods* goods, int n)//定义一个函数计算每件货物的总数量下的总价
{
	int i;
	for (i = 0; i < n; i++)//通过循环进行计算
	{
		goods[i].totalValue = goods[i].price * goods[i].quantity;
	}
}
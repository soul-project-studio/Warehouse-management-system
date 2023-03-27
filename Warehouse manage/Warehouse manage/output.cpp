#include"all.h"
void output(goods* goods,int n)//这里是创建输出库存清单模板
{
	float sum = 0;
	int i = 0;
	FILE* fp;
	fp = fopen("list.txt", "w+");//打开文件
	printf("库存清单：\n");
		printf("共有%d种货物\n", n);//输出货物种类数量
		
		for (i = 0; i < n; i++)//通过循环进行计算仓库中商品总价
		{
			sum = goods[i].totalValue + sum;

	}
		printf("总价值为%f元\n",sum);//输出总价
	fclose(fp);//关闭文件

}


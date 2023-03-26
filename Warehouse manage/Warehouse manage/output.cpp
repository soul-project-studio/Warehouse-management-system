#include"all.h"
void output(goods* goods,int n)//这里是创建输出库存清单模板
{
	float sum = 0;
	int i = 0;
	FILE* fp;
	fp = fopen("list.txt", "w+");
	printf("库存清单：\n");
		printf("共有%d种货物\n", n);
		
		for (i = 0; i < n; i++)
		{
			sum = goods[i].totalValue + sum;

	}
		printf("总价值为%f元\n",sum);
	fclose(fp);

}


#include"all.h"
void output(goods* goods, string filename, int n)//这里是创建输出库存清单模板
{
	float sum = 0;
	int i = 0;
	ofstream outfile(filename, ios::out); // 打开文件，以追加方式写入数据并清空文件
	          
	if (!outfile) {
		cerr << "Failed to open file for writing." << endl;
		return;
	}
	outfile << setw(10) << "编号" << setw(32) << "名称" << setw(16) << "数量" << setw(16) << "单价" << setw(16) << "总价" << endl; //输出各个变量名称
	for (i = 0; i < n; i++)
	{
		outfile << setw(10) << goods[i].number << setw(32) << goods[i].name << setw(16) << goods[i].quantity << setw(16)
			<< fixed << setprecision(2) << goods[i].price << setw(16) << goods[i].totalValue << endl; // 将学生信息写入文件
	}
	printf("库存清单：\n");
		printf("共有%d种货物\n", n);//输出货物种类数量
		
		for (i = 0; i < n; i++)//通过循环进行计算仓库中商品总价
		{
			sum = goods[i].totalValue + sum;

	}
		printf("总价值为%f元\n",sum);//输出总价
	outfile.close();       // 关闭文件

}


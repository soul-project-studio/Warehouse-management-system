#include"all.h"//调用头文件
void findnumber(goods* goods, int n) // 定义一个依靠货物编码进行信息查询的函数
{
	int i,flag=0;
	//flag作为标志进行判定若flag=0证明输入有误，若flag为1则输入成功
	char num[11];//输入编码字符串
	printf("请输入要查找的货物编码:");
	scanf("%s",num);//输入编码
	for (i = 0; i < n; i++)//进行循环查找
	{
		int cmp = strcmp(num, goods[i].number); //调用strcmp函数进行判定
		if (cmp==0 )
		{
			printf("恭喜您查询到该货物！\n");
			printf("  编码：%s\n  名称：%s\n  数量：%d\n  单价：%.2lf\n  总价：%.2lf\n",num, goods[i].name,goods[i].quantity,goods[i].price ,goods[i].totalValue);
			//输出正确结果
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("您输入的编码有误，请重新输入，谢谢！");//输出错误结果
	}
}
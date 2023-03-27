#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string.h>
#pragma warning(disable:4996)
using namespace std;

struct goods
{
	char number[11];
	char name[50];
	int quantity;
	double price;
	double totalValue;
};//定义货物编码，数量，名称，单价，总价结构体

void menu0();   //一级菜单
void menu3();   //选项3下的二级菜单
int readGoods(char* filename, goods* goods, int* numGoods);    //读取文件中的信息
void screenOutGoods(goods* goods, int n);         //把信息输出在屏幕上
void getTotalValue(goods* goods, int n);   //计算总价值
void output(goods* goods, int n);//输出库存清单
void findnumber(goods* goods, int n);//通过编码进行查找
void findname(goods* goods, int n);//通过名字进行查找
void messagedelate(goods* goods, int n);//对货物进行出库，既删除指定货物
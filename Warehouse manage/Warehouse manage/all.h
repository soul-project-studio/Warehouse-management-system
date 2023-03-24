#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#pragma warning(disable:4996)
using namespace std;

struct goods
{
	char number[11];
	char name[50];
	int quantity;
	double price;
	double totalValue;
};

void menu0();   //一级菜单
void menu3();   //选项3下的二级菜单
int readGoods(char* filename, goods* goods, int* numGoods);    //读取文件中的信息
void screenOutGoods(goods* goods, int n);         //把信息输出在屏幕上
void getTotalValue(goods* goods, int n);        //计算总价值
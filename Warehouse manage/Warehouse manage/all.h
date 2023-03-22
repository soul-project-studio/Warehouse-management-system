#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<iomanip>
#pragma warning(disable:4996)
using namespace std;

struct goods
{
	char num[13];
	char name[20];
	int num;
	double price;
	double totalValue;
};

void menu0();   //一级菜单
void menu3();   //选项3下的二级菜单
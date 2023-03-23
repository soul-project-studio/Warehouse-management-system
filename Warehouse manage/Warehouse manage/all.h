#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<iomanip>
#pragma warning(disable:4996)
using namespace std;

struct goods
{
	char number[13];
	char name[50];
	int quantity;
	double price;
	double totalValue;
};

void menu0();   //一级菜单
void menu3();   //选项3下的二级菜单
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

void menu0();   //һ���˵�
void menu3();   //ѡ��3�µĶ����˵�
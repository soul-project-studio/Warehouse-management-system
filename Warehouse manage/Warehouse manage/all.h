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

void menu0();   //һ���˵�
void menu3();   //ѡ��3�µĶ����˵�
int readGoods(char* filename, goods* goods, int* numGoods);    //��ȡ�ļ��е���Ϣ
void screenOutGoods(goods* goods, int n);         //����Ϣ�������Ļ��
void getTotalValue(goods* goods, int n);        //�����ܼ�ֵ
#include"all.h"//����ͷ�ļ�
int readGoods(char* filename, goods* goods, int* numGoods)//����һ���������ļ��л������ݽ������뵽�ṹ����
{
    FILE* fp = fopen(filename, "r");//���ļ�
    if (fp == NULL) 
    {
        printf("Error: Failed to open file %s.\n", filename);         //�ж��Ƿ���ļ�
        exit(1);
    }
    char line[1000];//����ṹ������
    int i = 0;
    while (fgets(line, 1000, fp) != NULL) {
        sscanf(line, "%d %s %d %lf", &(goods[i].number), goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //��ȡ�����
    getTotalValue(goods, i);
    sort(goods, i);
    fclose(fp);
    return i;      //�ܻ�������
}

void screenOutGoods(goods* goods, int n)//����һ�����������л�����л��ܲ�ѯ
{
    int i;
    cout << setw(10) << "���" << setw(32) << "����" << setw(16) << "����" << setw(16) << "����" << setw(16) << "�ܼ�" << endl;//���������������
    for (i = 0; i < n; i++)//ͨ��ѭ�����
    {
        cout << setw(10) << goods[i].number << setw(32) << goods[i].name << setw(16) << goods[i].quantity << setw(16)
            << fixed << setprecision(2) << goods[i].price << setw(16) << goods[i].totalValue << endl;     
    }
}

void sort(goods* good, int n)
{
    int i, j;               //ѭ������
    int a, b, max;             //a��b���ת���ֵĴ洢λ�� maxΪ���ֵ�±�
    goods swap;                  //swap�����õı���
    for (i = 0; i < n - 1; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            
            if (good[j].number > good[max].number)
            {
                max = j;
            }
        }
        swap = good[i];
        good[i] = good[max];
        good[max] = swap;
    }
}
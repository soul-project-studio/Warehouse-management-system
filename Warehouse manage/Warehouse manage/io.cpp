#include"all.h"
int readGoods(char* filename, goods* goods, int* numGoods)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Failed to open file %s.\n", filename);         //�ж��Ƿ���ļ�
        exit(1);
    }
    char line[1000];
    int i = 0;
    while (fgets(line, 1000, fp) != NULL) {
        sscanf(line, "%s %s %d %lf", goods[i].number, goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //��ȡ�����
    getTotalValue(goods, i);
    fclose(fp);
    return i;      //�ܻ�������
}

void screenOutGoods(goods* goods, int n) {
    int i;
    cout << setw(10) << "���" << setw(32) << "����" << setw(16) << "����" << setw(16) << "����" << setw(16) << "�ܼ�" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(10) << goods[i].number << setw(32) << goods[i].name << setw(16) << goods[i].quantity << setw(16)
            << fixed << setprecision(2) << goods[i].price << setw(16) << goods[i].totalValue << endl;     
    }
}
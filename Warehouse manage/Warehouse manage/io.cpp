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
        sscanf(line, "%s %s %d %lf", &(goods[i].number), &goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //��ȡ�����
    getTotalValue(goods, i);
    fclose(fp);
    return i;      //�ܻ�������
}

void screenOutGoods(goods* goods, int n) {
    int i;
    cout << "���\t\t" << "����\t\t\t" << "����\t" << "����\t" << "�ܼ�" << endl;
    for (i = 0; i < n; i++)
    {
        cout << goods[i].number << "\t" << goods[i].name << "\t\t" << goods[i].quantity << "\t"
            << fixed << setprecision(2) << goods[i].price << "\t" << goods[i].totalValue << endl;
    }
}
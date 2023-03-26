#include"all.h"
int readGoods(char* filename, goods* goods, int* numGoods)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Failed to open file %s.\n", filename);         //判断是否打开文件
        exit(1);
    }
    char line[1000];
    int i = 0;
    while (fgets(line, 1000, fp) != NULL) {
        sscanf(line, "%s %s %d %lf", goods[i].number, goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //读取并拆分
    getTotalValue(goods, i);
    fclose(fp);
    return i;      //总货物类数
}

void screenOutGoods(goods* goods, int n) {
    int i;
    cout << setw(10) << "编号" << setw(32) << "名称" << setw(16) << "数量" << setw(16) << "单价" << setw(16) << "总价" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(10) << goods[i].number << setw(32) << goods[i].name << setw(16) << goods[i].quantity << setw(16)
            << fixed << setprecision(2) << goods[i].price << setw(16) << goods[i].totalValue << endl;     
    }
}
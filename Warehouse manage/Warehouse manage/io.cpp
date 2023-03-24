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
        sscanf(line, "%s %s %d %lf", &(goods[i].number), &goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //读取并拆分
    getTotalValue(goods, i);
    fclose(fp);
    return i;      //总货物类数
}

void screenOutGoods(goods* goods, int n) {
    int i;
    cout << "编号\t\t" << "名称\t\t\t" << "数量\t" << "单价\t" << "总价" << endl;
    for (i = 0; i < n; i++)
    {
        cout << goods[i].number << "\t" << goods[i].name << "\t\t" << goods[i].quantity << "\t"
            << fixed << setprecision(2) << goods[i].price << "\t" << goods[i].totalValue << endl;
    }
}
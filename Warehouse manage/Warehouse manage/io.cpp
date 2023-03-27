#include"all.h"//调用头文件
int readGoods(char* filename, goods* goods, int* numGoods)//定义一个函数将文件中货物数据进行输入到结构体中
{
    FILE* fp = fopen(filename, "r");//打开文件
    if (fp == NULL) 
    {
        printf("Error: Failed to open file %s.\n", filename);         //判断是否打开文件
        exit(1);
    }
    char line[1000];//定义结构体数组
    int i = 0;
    while (fgets(line, 1000, fp) != NULL) {
        sscanf(line, "%d %s %d %lf", &(goods[i].number), goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //读取并拆分
    getTotalValue(goods, i);
    sort(goods, i);
    fclose(fp);
    return i;      //总货物类数
}

void screenOutGoods(goods* goods, int n)//定义一个函数对所有货物进行汇总查询
{
    int i;
    cout << setw(10) << "编号" << setw(32) << "名称" << setw(16) << "数量" << setw(16) << "单价" << setw(16) << "总价" << endl;//输出各个数据名称
    for (i = 0; i < n; i++)//通过循环输出
    {
        cout << setw(10) << goods[i].number << setw(32) << goods[i].name << setw(16) << goods[i].quantity << setw(16)
            << fixed << setprecision(2) << goods[i].price << setw(16) << goods[i].totalValue << endl;     
    }
}

void sort(goods* good, int n)
{
    int i, j;               //循环变量
    int a, b, max;             //a，b编号转数字的存储位置 max为最大值下标
    goods swap;                  //swap交换用的变量
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
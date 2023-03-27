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
    while (fgets(line, 1000, fp) != NULL) 
    {
        sscanf(line, "%s %s %d %lf", goods[i].number, goods[i].name
            , &(goods[i].quantity), &(goods[i].price));
        i++;
    }         //读取并拆分
    getTotalValue(goods, i);//调用每种货物总价计算函数
    fclose(fp);//关闭文件
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
#include"all.h"
void output(goods* goods,int n)//�����Ǵ����������嵥ģ��
{
	float sum = 0;
	int i = 0;
	FILE* fp;
	fp = fopen("list.txt", "w+");
	printf("����嵥��\n");
		printf("����%d�ֻ���\n", n);
		
		for (i = 0; i < n; i++)
		{
			sum = goods[i].totalValue + sum;

	}
		printf("�ܼ�ֵΪ%fԪ\n",sum);
	fclose(fp);

}


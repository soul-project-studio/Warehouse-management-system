#include"all.h"//����ͷ�ļ�
void findname(goods* goods, int n)//����һ���������ƽ�����Ϣ��ѯ�ĺ���
{
	int i, flag = 0;
	//flag��Ϊ��־�����ж���flag=0֤������������flagΪ1������ɹ�
	char name[50];//����һ���ַ���
	printf("������Ҫ���ҵĻ������ƣ�");
	scanf("%s", name);//��������
	for (i = 0; i < n; i++)//����ѭ����ѯ
	{
		if (strcmp(name, goods[i].name) == 0)//����strcmp���������ж�
		{
			printf("��ϲ����ѯ���û��\n");
			printf("  ���룺%s\n  ���ƣ�%s\n  ������%d\n  ���ۣ�%.2lf\n  �ܼۣ�%.2lf\n",goods[i].number, goods[i].name, goods[i].quantity, goods[i].price, goods[i].totalValue);
			//������
			flag = 1;//��־flag�����ж�
		}

	}
	if (flag == 0)
	{
		printf("������������������������룬лл��");//���������
	}
}
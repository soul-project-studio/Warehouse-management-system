#include"all.h"//����ͷ�ļ�
void findnumber(goods* goods, int n) // ����һ������������������Ϣ��ѯ�ĺ���
{
	int i,flag=0;
	//flag��Ϊ��־�����ж���flag=0֤������������flagΪ1������ɹ�
	char num[11];//��������ַ���
	printf("������Ҫ���ҵĻ������:");
	scanf("%s",num);//�������
	for (i = 0; i < n; i++)//����ѭ������
	{
		int cmp = strcmp(num, goods[i].number); //����strcmp���������ж�
		if (cmp==0 )
		{
			printf("��ϲ����ѯ���û��\n");
			printf("  ���룺%s\n  ���ƣ�%s\n  ������%d\n  ���ۣ�%.2lf\n  �ܼۣ�%.2lf\n",num, goods[i].name,goods[i].quantity,goods[i].price ,goods[i].totalValue);
			//�����ȷ���
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("������ı����������������룬лл��");//���������
	}
}
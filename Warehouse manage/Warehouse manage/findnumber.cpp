#include"all.h"//����ͷ�ļ�
void findnumber(goods* goods, int n) // ����һ������������������Ϣ��ѯ�ĺ���
{
	int i,flag=0;
	//flag��Ϊ��־�����ж���flag=0֤������������flagΪ1������ɹ�
	int num;//��������ַ���
	printf("������Ҫ���ҵĻ������:");
	scanf("%d",&num);//�������
	for (i = 0; i < n; i++)//����ѭ������
	{
		
		if (num == goods[i].number)
		{
			printf("��ϲ����ѯ���û��\n");
			printf("  ���룺%d\n  ���ƣ�%s\n  ������%d\n  ���ۣ�%.2lf\n  �ܼۣ�%.2lf\n",num, goods[i].name,goods[i].quantity,goods[i].price ,goods[i].totalValue);
			//�����ȷ���
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("������ı����������������룬лл��");//���������
	}
}
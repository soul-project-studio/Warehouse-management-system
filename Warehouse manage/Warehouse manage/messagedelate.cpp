#include"all.h"
void messagedelate(goods* goods, int n)
{
	int i, delateNumber, flag = 0;
	char name[50];
	printf("������Ҫ����Ļ������ƣ�");
	scanf("%s\n", name);
	cout << endl << "���������û����������";
	cin >> delateNumber;
	for (i = 0; i < n; i++)
	{
		if (strcmp(name, goods[i].name) == 0)
		{
			if (delateNumber <= goods[i].quantity)
			{
				goods[i].quantity -= delateNumber;
				cout << "����ɹ����ѳ���" << delateNumber << "��" << goods[i].name << "��"
					<< "ʣ��" << goods[i].quantity << "��" << goods[i].name << "��" << endl;
			}
			else
			{
				cout << "������������������������룬лл��" << endl;
			}
			flag = 1;
		}

	}
	if (flag == 0)
	{
		printf("������������������������룬лл��");
	}
}
#include"all.h"
void output(goods* goods, string filename, int n)//�����Ǵ����������嵥ģ��
{
	float sum = 0;
	int i = 0;
	ofstream outfile(filename, ios::out); // ���ļ�����׷�ӷ�ʽд�����ݲ�����ļ�
	          
	if (!outfile) {
		cerr << "Failed to open file for writing." << endl;
		return;
	}
	outfile << setw(10) << "���" << setw(32) << "����" << setw(16) << "����" << setw(16) << "����" << setw(16) << "�ܼ�" << endl; //���������������
	for (i = 0; i < n; i++)
	{
		outfile << setw(10) << goods[i].number << setw(32) << goods[i].name << setw(16) << goods[i].quantity << setw(16)
			<< fixed << setprecision(2) << goods[i].price << setw(16) << goods[i].totalValue << endl; // ��ѧ����Ϣд���ļ�
	}
	printf("����嵥��\n");
		printf("����%d�ֻ���\n", n);//���������������
		
		for (i = 0; i < n; i++)//ͨ��ѭ�����м���ֿ�����Ʒ�ܼ�
		{
			sum = goods[i].totalValue + sum;

	}
		printf("�ܼ�ֵΪ%fԪ\n",sum);//����ܼ�
	outfile.close();       // �ر��ļ�

}


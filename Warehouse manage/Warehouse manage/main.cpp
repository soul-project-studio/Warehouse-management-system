#include"all.h"


int main()
{
	int choice, choice3, n;           //����choice��һ�������ѡ��choice�ڲ˵�3�������ѡ��
	int* numGoods;                        //��ǰ��������
	char fn[20] = "goods.txt";        //�ļ���
	char* filenameIn;           //�����ļ���
	char a;                      //���ڶ�ȡ�����ַ�
	goods good[10000];           //��������

	filenameIn = fn;
	numGoods = &n;
	do
	{
		menu0();
		cout << "��ѡ�������:_\b";
		cin >> choice;                      //��ȡѡ��
		switch (choice)
		{
		case 1:
			n = readGoods(filenameIn, good, numGoods);          //��ȡ�ļ�����
			cout << "��ȡ�ɹ�������س������س�ʼ���档" << endl;
			a = getchar();
			a = getchar();
			break;
		case 2:
			cout << "����2" << endl;        //����2�Ľӿ��滻
			break;
		case 3:
			do {
				menu3();
				cout << "��ѡ�������:_\b";
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					findname(good,n);
					cout << "����ɹ�������س������س�ʼ���档" << endl;
					a = getchar();
					a = getchar();//����31�Ľӿ��滻
					break;
				case 2:
					findnumber(good,n); 
					cout << "����ɹ�������س������س�ʼ���档" << endl;
					a = getchar();
					a = getchar();//����32�Ľӿ��滻
					break;
				case 0:
					break;
				default:
					cout << "��Ч��ѡ�������ѡ��" << endl;
					break;
				}
			} while (choice3 != 0);        //����3�Ľӿ��滻
			break;
		case 4:
			cout << "����4" << endl;       //����4�Ľӿ��滻
			break;
		case 5: 
			screenOutGoods(good, n);         //����Ļ�������Ϣ
			cout << "����ɹ�������س������س�ʼ���档" << endl;
			a = getchar();
			a = getchar();
			break;
		case 6:
			output(good, n); 
			cout << "����ɹ�������س������س�ʼ���档" << endl;
			a = getchar();
			a = getchar();//����6�Ľӿ��滻
			break;
		case 0:
			cout << "��лʹ�����ǵ��������ӭ�´�������" << endl;
			break;
		default:
			cout << "��Ч��ѡ�������ѡ��" << endl;
			break;
		}
		
			
	} while (choice != 0);
	
}
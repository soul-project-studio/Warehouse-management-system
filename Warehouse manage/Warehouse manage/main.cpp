#include"all.h"

int main()
{
	int choice, choice3;


	do
	{
		menu0();
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "����1" << endl;           // ����1�Ľӿ��滻
			break;
		case 2:
			cout << "����2" << endl;        //����2�Ľӿ��滻
			break;
		case 3:
			do {
				menu3();
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					cout << "����31" << endl;          //����31�Ľӿ��滻
					break;
				case 2:
					cout << "����32" << endl;           //����32�Ľӿ��滻
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
			cout << "����5" << endl;          //����5�Ľӿ��滻
			break;
		case 0:
			cout << "ллʹ�á�" << endl;
			break;
		default:
			cout << "��Ч��ѡ�������ѡ��" << endl;
			break;
		}
		
			
	} while (choice != 0);
	
}
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
			cout << "函数1" << endl;           // 函数1的接口替换
			break;
		case 2:
			cout << "函数2" << endl;        //函数2的接口替换
			break;
		case 3:
			do {
				menu3();
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					cout << "函数31" << endl;          //函数31的接口替换
					break;
				case 2:
					cout << "函数32" << endl;           //函数32的接口替换
					break;
				case 0:
					break;
				default:
					cout << "无效的选项，请重新选择。" << endl;
					break;
				}
			} while (choice3 != 0);        //函数3的接口替换
			break;
		case 4:
			cout << "函数4" << endl;       //函数4的接口替换
			break;
		case 5: 
			cout << "函数5" << endl;          //函数5的接口替换
			break;
		case 0:
			cout << "谢谢使用。" << endl;
			break;
		default:
			cout << "无效的选项，请重新选择。" << endl;
			break;
		}
		
			
	} while (choice != 0);
	
}
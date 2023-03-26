#include"all.h"


int main()
{
	int choice, choice3, n;           //定义choice第一次输入的选择，choice在菜单3下输入的选择
	int* numGoods;                        //当前货物类数
	char fn[20] = "goods.txt";        //文件名
	char* filenameIn;           //输入文件名
	char a;                      //用于读取多余字符
	goods good[10000];           //货物数据

	filenameIn = fn;
	numGoods = &n;
	do
	{
		menu0();
		cout << "请选择功能序号:_\b";
		cin >> choice;                      //获取选择
		switch (choice)
		{
		case 1:
			n = readGoods(filenameIn, good, numGoods);          //读取文件内容
			cout << "读取成功，输入回车键返回初始界面。" << endl;
			a = getchar();
			a = getchar();
			break;
		case 2:
			cout << "函数2" << endl;        //函数2的接口替换
			break;
		case 3:
			do {
				menu3();
				cout << "请选择功能序号:_\b";
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					findname(good,n);
					cout << "输出成功，输入回车键返回初始界面。" << endl;
					a = getchar();
					a = getchar();//函数31的接口替换
					break;
				case 2:
					findnumber(good,n); 
					cout << "输出成功，输入回车键返回初始界面。" << endl;
					a = getchar();
					a = getchar();//函数32的接口替换
					break;
				case 0:
					break;
				default:
					cout << "无效的选项，请重新选择！" << endl;
					break;
				}
			} while (choice3 != 0);        //函数3的接口替换
			break;
		case 4:
			cout << "函数4" << endl;       //函数4的接口替换
			break;
		case 5: 
			screenOutGoods(good, n);         //在屏幕中输出信息
			cout << "输出成功，输入回车键返回初始界面。" << endl;
			a = getchar();
			a = getchar();
			break;
		case 6:
			output(good, n); 
			cout << "输出成功，输入回车键返回初始界面。" << endl;
			a = getchar();
			a = getchar();//函数6的接口替换
			break;
		case 0:
			cout << "感谢使用我们的软件，欢迎下次再来！" << endl;
			break;
		default:
			cout << "无效的选项，请重新选择！" << endl;
			break;
		}
		
			
	} while (choice != 0);
	
}
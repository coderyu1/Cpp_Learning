#include "contact.h"

int main()
{
	int select;//用户选择变量
	AddrList al;//创建通讯录变量
	al.size = 0;//通讯录初始化

	while (true)
	{
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://1.添加联系人
			addPerson(&al);
			break;
		case 2://2.显示联系人
			showPerson(&al);
			break;
		case 3://3.删除联系人
			deletePerson(&al);
			break;
		case 4://4.查找联系人
			findPerson(&al);
			break;
		case 5://5.修改联系人
			modifyPerson(&al);
			break;
		case 6://6.清空通讯录
			cleanPerson(&al);//清空通讯录
			break;
		case 0://0.退出通讯录
			cout << "退出通讯录" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "选择错误，重新选择" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}


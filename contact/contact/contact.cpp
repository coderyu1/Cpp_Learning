#include "contact.h"

void showMenu()//菜单功能显示
{
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空通讯录  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}

void addPerson(AddrList* al)//添加联系人
{
	if (al->size == MAX)//判断通讯录是否已满
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else
	{
		//输入姓名
		cout << "请输入姓名：" << endl;
		cin >> al->arr[al->size].name;
		//输入性别
		cout << "请输入性别(1--男 0--女)：" << endl;
		int sex;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 0)
			{
				al->arr[al->size].sex = sex;
				break;
			}
			cout << "选择错误，重新选择" << endl;
			cin >> sex;
		}
		//输入年龄
		cout << "请输入年龄：" << endl;
		cin >> al->arr[al->size].age;
		//输入电话
		cout << "请输入电话：" << endl;
		cin >> al->arr[al->size].phone;
		//输入住址
		cout << "请输入住址：" << endl;
		cin >> al->arr[al->size].addr;

		al->size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

void showPerson(const AddrList* al)//显示联系人
{
	if (!al->size)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < al->size; i++)
		{
			cout << "姓名：" << al->arr[i].name << "\t";
			cout << "性别：" << (al->arr[i].sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << al->arr[i].age << "\t";
			cout << "电话：" << al->arr[i].phone << "\t";
			cout << "住址：" << al->arr[i].addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(const AddrList* al, string name)//查找联系人：存在，返回位置；不存在，返回-1
{
	for (int i = 0; i < al->size; i++)
	{
		if (name == al->arr[i].name)
			return i;
	}
	return -1;
}

void deletePerson(AddrList* al)//删除联系人
{
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;

	//查找联系人
	int ret = isExist(al, name);
	if (ret != -1)
	{
		for (int i = ret; i < al->size - 1; i++)
		{
			al->arr[i] = al->arr[i + 1];
		}
		al->size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(const AddrList* al)//查找联系人
{
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;
	
	int ret = isExist(al, name);
	if (ret != -1)
	{
		cout << "姓名：" << al->arr[ret].name << "\t";
		cout << "性别：" << (al->arr[ret].sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << al->arr[ret].age << "\t";
		cout << "电话：" << al->arr[ret].phone << "\t";
		cout << "住址：" << al->arr[ret].addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(AddrList* al)//修改联系人
{
	string name;
	cout << "请输入联系人姓名：" << endl;
	cin >> name;
	
	int ret = isExist(al, name);
	if (ret != -1)
	{
		cout << "请输入姓名：" << endl;
		cin >> al->arr[ret].name;
		cout << "请输入性别(1--男 0--女)：" << endl;
		int sex;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 0)
			{
				al->arr[ret].sex = sex;
				break;
			}
			cout << "选择错误，重新选择" << endl;
			cin >> sex;
		}
		cout << "请输入年龄：" << endl;
		cin >> al->arr[ret].age;
		cout << "请输入电话：" << endl;
		cin >> al->arr[ret].phone;
		cout << "请输入住址：" << endl;
		cin >> al->arr[ret].addr;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(AddrList* al)//清空通讯录
{
	al->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
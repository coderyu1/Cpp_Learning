#pragma once
//头文件包含
#include <iostream>
using namespace std;
#include <string>

//结构体等变量
#define MAX 100//通讯录最大容量
typedef struct Person//联系人结构体
{
	string name;//姓名
	int sex;//性别：1男 0女
	int age;//年龄
	string phone;//电话
	string addr;//住址
}Person;

typedef struct AddrList//通讯录结构体
{
	Person arr[MAX];//联系人数组
	int size;//当前联系人数量
}AddrList;

//函数声明
void showMenu();//菜单功能界面
void addPerson(AddrList* al);//添加联系人
void showPerson(const AddrList* al);//显示联系人
int isExist(const AddrList* al, string name);//查找联系人
void deletePerson(AddrList* al);//删除联系人
void findPerson(const AddrList* al);//查找联系人
void modifyPerson(AddrList* al);//修改联系人
void cleanPerson(AddrList* al);//清空通讯录
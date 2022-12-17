#include "contact.h"

void showMenu()//�˵�������ʾ
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.���ͨѶ¼  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}

void addPerson(AddrList* al)//�����ϵ��
{
	if (al->size == MAX)//�ж�ͨѶ¼�Ƿ�����
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else
	{
		//��������
		cout << "������������" << endl;
		cin >> al->arr[al->size].name;
		//�����Ա�
		cout << "�������Ա�(1--�� 0--Ů)��" << endl;
		int sex;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 0)
			{
				al->arr[al->size].sex = sex;
				break;
			}
			cout << "ѡ���������ѡ��" << endl;
			cin >> sex;
		}
		//��������
		cout << "���������䣺" << endl;
		cin >> al->arr[al->size].age;
		//����绰
		cout << "������绰��" << endl;
		cin >> al->arr[al->size].phone;
		//����סַ
		cout << "������סַ��" << endl;
		cin >> al->arr[al->size].addr;

		al->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

void showPerson(const AddrList* al)//��ʾ��ϵ��
{
	if (!al->size)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < al->size; i++)
		{
			cout << "������" << al->arr[i].name << "\t";
			cout << "�Ա�" << (al->arr[i].sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << al->arr[i].age << "\t";
			cout << "�绰��" << al->arr[i].phone << "\t";
			cout << "סַ��" << al->arr[i].addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(const AddrList* al, string name)//������ϵ�ˣ����ڣ�����λ�ã������ڣ�����-1
{
	for (int i = 0; i < al->size; i++)
	{
		if (name == al->arr[i].name)
			return i;
	}
	return -1;
}

void deletePerson(AddrList* al)//ɾ����ϵ��
{
	string name;
	cout << "��������ϵ��������" << endl;
	cin >> name;

	//������ϵ��
	int ret = isExist(al, name);
	if (ret != -1)
	{
		for (int i = ret; i < al->size - 1; i++)
		{
			al->arr[i] = al->arr[i + 1];
		}
		al->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(const AddrList* al)//������ϵ��
{
	string name;
	cout << "��������ϵ��������" << endl;
	cin >> name;
	
	int ret = isExist(al, name);
	if (ret != -1)
	{
		cout << "������" << al->arr[ret].name << "\t";
		cout << "�Ա�" << (al->arr[ret].sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << al->arr[ret].age << "\t";
		cout << "�绰��" << al->arr[ret].phone << "\t";
		cout << "סַ��" << al->arr[ret].addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(AddrList* al)//�޸���ϵ��
{
	string name;
	cout << "��������ϵ��������" << endl;
	cin >> name;
	
	int ret = isExist(al, name);
	if (ret != -1)
	{
		cout << "������������" << endl;
		cin >> al->arr[ret].name;
		cout << "�������Ա�(1--�� 0--Ů)��" << endl;
		int sex;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 0)
			{
				al->arr[ret].sex = sex;
				break;
			}
			cout << "ѡ���������ѡ��" << endl;
			cin >> sex;
		}
		cout << "���������䣺" << endl;
		cin >> al->arr[ret].age;
		cout << "������绰��" << endl;
		cin >> al->arr[ret].phone;
		cout << "������סַ��" << endl;
		cin >> al->arr[ret].addr;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(AddrList* al)//���ͨѶ¼
{
	al->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
#pragma once
//ͷ�ļ�����
#include <iostream>
using namespace std;
#include <string>

//�ṹ��ȱ���
#define MAX 100//ͨѶ¼�������
typedef struct Person//��ϵ�˽ṹ��
{
	string name;//����
	int sex;//�Ա�1�� 0Ů
	int age;//����
	string phone;//�绰
	string addr;//סַ
}Person;

typedef struct AddrList//ͨѶ¼�ṹ��
{
	Person arr[MAX];//��ϵ������
	int size;//��ǰ��ϵ������
}AddrList;

//��������
void showMenu();//�˵����ܽ���
void addPerson(AddrList* al);//�����ϵ��
void showPerson(const AddrList* al);//��ʾ��ϵ��
int isExist(const AddrList* al, string name);//������ϵ��
void deletePerson(AddrList* al);//ɾ����ϵ��
void findPerson(const AddrList* al);//������ϵ��
void modifyPerson(AddrList* al);//�޸���ϵ��
void cleanPerson(AddrList* al);//���ͨѶ¼
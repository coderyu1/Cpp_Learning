#include "contact.h"

int main()
{
	int select;//�û�ѡ�����
	AddrList al;//����ͨѶ¼����
	al.size = 0;//ͨѶ¼��ʼ��

	while (true)
	{
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://1.�����ϵ��
			addPerson(&al);
			break;
		case 2://2.��ʾ��ϵ��
			showPerson(&al);
			break;
		case 3://3.ɾ����ϵ��
			deletePerson(&al);
			break;
		case 4://4.������ϵ��
			findPerson(&al);
			break;
		case 5://5.�޸���ϵ��
			modifyPerson(&al);
			break;
		case 6://6.���ͨѶ¼
			cleanPerson(&al);//���ͨѶ¼
			break;
		case 0://0.�˳�ͨѶ¼
			cout << "�˳�ͨѶ¼" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "ѡ���������ѡ��" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}


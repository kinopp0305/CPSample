/* ���낢��ȓ��o�̓}�j�s�����[�^���g���v���O�����imaniGood.cpp�j */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 11;
	// �_���l��\������
	bool bl1 = true, bl2 = false;
	cout << "�_���l�̃f�t�H���g�\���F" << bl1 << '\t' << bl2 << '\n'
		<< "boolalpha���w��F\t" << boolalpha << bl1 << '\t' << bl2 << '\n'
		<< "noboolalpha���w��F\t" << noboolalpha << bl1 << '\t' << bl2 << endl;

	// ������\������
	int n = 0x5F;
	cout << "\n�����̃f�t�H���g�\���F\t\t" << n
		<< "\nhex�Ashowbase�Auppercase���w��F"
		<< hex << showbase << uppercase << n
		<< "\noct��nouppercase���w��F\t"
		<< oct << nouppercase << n
		<< "\ndec��noshowbase���w��F\t\t"
		<< dec << noshowbase << n << endl;

	// ���������_����\������`�����_�ȉ��̕\����؂�ւ���
	double d1 = 3.000;
	double d2 = 3.14159265358;
	cout << "\n���������_���̃f�t�H���g�\���F\t"
		<< d1 << '\t' << d2
		<< "\nshowpoint���w��F\t\t" << showpoint
		<< d1 << '\t' << d2
		<< "\nnoshowpoint���w��F\t\t" << noshowpoint
		<< d1 << '\t' << d2
		<< "\nfixed���w��F\t\t\t" << fixed
		<< d1 << '\t' << d2 << endl;
	cout << "���������_���̃f�t�H���g�\���F\t"
		<< resetiosflags(ios::fixed)
		<< d1 << '\t' << d2 << endl;

	// �W�����͂�setw()���g��
	char buff[size];
	cout << "\n���������͂��Ă��������F\t";
	cin >> setw(size) >> buff;
	cout << "�󂯓��ꂽ�o�C�g���F\t\t" << strlen(buff) << endl;
	cout << "�󂯓��ꂽ������F\t\t" << buff << endl;

	return 0;
}

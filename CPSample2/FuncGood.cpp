/* �������O��2�̊֐����`����v���O���� */
// ���o�̓X�g���[�����g��
#include <iostream>
// ���C�u������std���O��Ԃ��g��
using namespace std;

// �t�@�C���X�R�[�v�̖������O��Ԃ��`����
namespace {
	// char�^�̈������Ƃ�print()�֐����`����
	void print(char ch) {
		cout << ch << endl;
		cout << "print()��char�^�o�[�W�������Ăяo���ꂽ�B" << endl;
	}
	// int�^�̈������Ƃ�print()�֐����`����
	void print(int n) {
		cout << n << endl;
		cout << "print()��int�^�o�[�W�������Ăяo���ꂽ�B" << endl;
	}
}

int main() {
	char ch;
	int n;

	cout << "1�̕�������͂��Ă��������F";
	cin >> ch;
	cout << "���x�́A1�̐�������͂��Ă��������F";
	cin >> n;
	cout << "���͂��ꂽ�����F";
	print(ch);
	cout << "���͂��ꂽ�����F";
	print(n);

	return 0;
}

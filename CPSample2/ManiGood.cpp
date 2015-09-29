/* いろいろな入出力マニピュレータを使うプログラム（maniGood.cpp） */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 11;
	// 論理値を表示する
	bool bl1 = true, bl2 = false;
	cout << "論理値のデフォルト表示：" << bl1 << '\t' << bl2 << '\n'
		<< "boolalphaを指定：\t" << boolalpha << bl1 << '\t' << bl2 << '\n'
		<< "noboolalphaを指定：\t" << noboolalpha << bl1 << '\t' << bl2 << endl;

	// 整数を表示する
	int n = 0x5F;
	cout << "\n整数のデフォルト表示：\t\t" << n
		<< "\nhex、showbase、uppercaseを指定："
		<< hex << showbase << uppercase << n
		<< "\noctとnouppercaseを指定：\t"
		<< oct << nouppercase << n
		<< "\ndecとnoshowbaseを指定：\t\t"
		<< dec << noshowbase << n << endl;

	// 浮動小数点数を表示する～小数点以下の表示を切り替える
	double d1 = 3.000;
	double d2 = 3.14159265358;
	cout << "\n浮動小数点数のデフォルト表示：\t"
		<< d1 << '\t' << d2
		<< "\nshowpointを指定：\t\t" << showpoint
		<< d1 << '\t' << d2
		<< "\nnoshowpointを指定：\t\t" << noshowpoint
		<< d1 << '\t' << d2
		<< "\nfixedを指定：\t\t\t" << fixed
		<< d1 << '\t' << d2 << endl;
	cout << "浮動小数点数のデフォルト表示：\t"
		<< resetiosflags(ios::fixed)
		<< d1 << '\t' << d2 << endl;

	// 標準入力でsetw()を使う
	char buff[size];
	cout << "\n文字列を入力してください：\t";
	cin >> setw(size) >> buff;
	cout << "受け入れたバイト数：\t\t" << strlen(buff) << endl;
	cout << "受け入れた文字列：\t\t" << buff << endl;

	return 0;
}

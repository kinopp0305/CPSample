/* 同じ名前の2つの関数を定義するプログラム */
// 入出力ストリームを使う
#include <iostream>
// ライブラリのstd名前空間を使う
using namespace std;

// ファイルスコープの無名名前空間を定義する
namespace {
	// char型の引数をとるprint()関数を定義する
	void print(char ch) {
		cout << ch << endl;
		cout << "print()のchar型バージョンが呼び出された。" << endl;
	}
	// int型の引数をとるprint()関数を定義する
	void print(int n) {
		cout << n << endl;
		cout << "print()のint型バージョンが呼び出された。" << endl;
	}
}

int main() {
	char ch;
	int n;

	cout << "1つの文字を入力してください：";
	cin >> ch;
	cout << "今度は、1つの整数を入力してください：";
	cin >> n;
	cout << "入力された文字：";
	print(ch);
	cout << "入力された整数：";
	print(n);

	return 0;
}

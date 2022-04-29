#include <iostream>
#include <string>
#include <fstream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	ofstream fout;
	fout.open("myfile.txt", ofstream::app);
	// ofstream::app добавление текста в конец файла
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла!";
	}
	else {
		int a;
		cin >> a;
		fout << a << endl;
	}
	fout.close();
}

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	//Шифрование на английском по Цезарю — это прибавление к номеру символа числа 3, затем взятие остатка от деления на 26, если считать,
	//что символы нумеруются с нуля. 
	//Поэтому необходимо вычесть из кода символа код буквы 'A' для заглавных букв и 'a' для строчных.
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = 'A' + ((s[i] - 'A' + 3) % 26);
		}
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = 'a' + ((s[i] - 'a' + 3) % 26);
		}
	}
	cout << s;
	return 0;
}

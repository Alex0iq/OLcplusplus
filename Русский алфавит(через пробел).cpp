#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	for (char c = 'а'; c <= 'я'; ++c) {
		s = s + c + " ";
	}
	cout << s;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 'A' && s[i] <= 'z') {
			s[i] = s[i] + 3;
		}
	}
	cout << s;
	return 0;
}

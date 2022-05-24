#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int n = 0;
	for (int i = 0; i != s.size(); i++) {
		if (s[i] == '(') {
			n += 1;
		}
		else if (s[i] == ')') {
			n -= 1;
			if (n < 0) {
				break;
			}
		}
	}
	if (n == 0) {
		cout << "It's correct, yay =)";
	}
	else {
		cout << "It's wrong, buddy =(";
	}
	return 0;
}

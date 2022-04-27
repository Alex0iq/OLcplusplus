#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int f(int x) {
	if (x == 0) {
		return 1;
	}
	if (x < 0) {
		return 0;
	}
	return x * f(x - 1);
}
int main() {
	int x;
	cin >> x;
	cout << f(x);
	return 0;
}

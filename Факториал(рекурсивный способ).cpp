#include <iostream>
using namespace std;

long long factorial(int x) {
	if (x < 0) {
		return 0;
	}
	else if (x == 0) {
		return 1;
	}
	else{
		return x * factorial(x - 1);
	}
}
int main() {
	int x;
	cin >> x;
	cout << factorial(x);
	return 0;
}

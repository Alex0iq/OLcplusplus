#include <iostream>
using namespace std;

double fast_pow(double x, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n % 2 == 1) {
		return x * fast_pow(x, n - 1);
	}
	else {
		return fast_pow(x * x, n / 2);
	};
}
int main() {
	int n;
	double x;
	cin >> x >> n;
	cout << fast_pow(x, n);
}

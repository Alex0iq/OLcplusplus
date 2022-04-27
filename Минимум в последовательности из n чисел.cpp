#include <iostream>
#include <algorithm>
using namespace std;

int f(int n) {
	if (n == 0) {
		return 1e9; //10**9, будем считать что числа вводятся до миллиарда
	}
	int x;
	cin >> x;
	return min(x, f(n - 1));
}
int main() {
	int n;
	cin >> n;
	cout << f(n);
}

#include <iostream>
using namespace std;

void f(int n) {
	if (n == 0) {
		return; //разворачиваем тем самым "массив"
	}
	int x;
	cin >> x;
	f(n - 1);
	cout << x << " ";
}

int main() {
	int n;
	cin >> n;
	f(n);
}

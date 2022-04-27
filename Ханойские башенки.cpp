#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

void hanoi(int n, int from, int to) {
	if (n == 0) {
		return;
	}
	hanoi(n - 1, from, 6 - from - to);
	cout << n << " " << from << " " << to << '\n';
	hanoi(n - 1, 6 - from - to, to);
	//Функция выведет 1 число - какое колечко берется
	//2 число - из какого столбика ханойской башни берется
	//и 3 число - на какой столбик надо переложить это колечко
	// задача R.I.P
}
int main() {
	int n;
	cin >> n;
	hanoi(n , 1 , 3);
}

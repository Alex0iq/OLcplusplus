#include <iostream>
using namespace std;

void doSomeFuckingMagic() {
	int from, to;
	cin >> from >> to;
	for (int i = from; i <= to; i++) {
		bool k = 0;
		int b = i / 2;
		for (int j = 2; j <= b; j++) {
			if (i % j == 0) {
				k += 1;
				if (k == 1) {
					break;
				}
			}
		}
		if (k == 0 && i > 1) {
			cout << i << " ";
		}
	}
}

int main() {
	doSomeFuckingMagic();
}

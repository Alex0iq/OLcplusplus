#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {
	int a;
	cin >> a;
	vector<int> b;
	while (a > 0) {
		b.push_back(a % 2);
		a = a / 2;
	}
	reverse(b.begin(), b.end());
	for (int i = 0; i < b.size(); i++) {
		cout << b[i];
	}
}

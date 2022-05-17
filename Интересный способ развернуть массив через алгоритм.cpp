#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int n = 10;
int main() {
	vector<int> a(n);
	for (int i = 0; i < a.size(); i++) {
		a[i] = i;
	}
	int b = a.size() / 2;
	for (int i = 0; i < b; i++) {
		swap(a[i], a[n - 1 - i]);
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}

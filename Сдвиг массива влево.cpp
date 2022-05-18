#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<int> &a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < a.size(); i++) {
		a[i] = i;
	}
	print_vector(a);
	int tmp = a[0];
	for (int i = 0; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	a[n - 1] = tmp;
	cout << "\n";
	print_vector(a);
}

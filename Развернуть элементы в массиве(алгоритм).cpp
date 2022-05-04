#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {0, 1, 2, 3, 4};
	reverse(a.begin(), a.end());
	int n = a.size();
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}

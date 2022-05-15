#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> a(n, 4); 
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

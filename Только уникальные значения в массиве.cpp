#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = { 1,1,3,5,5,6,7,7,7,10,10,11 };
	a.resize(unique(a.begin(), a.end()) - a.begin());
	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}
}

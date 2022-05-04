#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = { 3,1,3,4,4,4,45,53,535,36,6,754,7,758,89};
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}
}

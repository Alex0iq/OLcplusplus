#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct kek {
	int x;
	kek() {
		x = 3;
	}
};
int main() {
	int n;
	cin >> n;
	vector<kek> a(n); //используя какую либо структру
	//мы вызываем ее оператор по умолчанию, в данном случае х = 3
	//=)
	for (int i = 0; i < n; i++) {
		cout << a[i].x << " ";
	}
}

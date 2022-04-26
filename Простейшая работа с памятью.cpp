#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[] = { 1,3,5,7,9 };
	int* b = &a[1];
	b += 2;
	cout << *b;
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
template <typename T> //шаблоны
struct elem {
	T x;
};

int main() {
	elem<int> a;
	a.x = 3;
	elem<string> b;
	b.x = "kek";
	cout << a.x << " " << b.x;
	return 0;
}

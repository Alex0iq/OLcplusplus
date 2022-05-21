#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct person {
	string name;
	int age;
};

int main()
{
	int mage = -1;
	int n;
	cin >> n;
	vector<person> a(n);
	for (int i = 0; i < n; i++) {
		person one;
		cin >> one.name >> one.age;
		a[i] = one;
	}
	for (int i = 0; i < n; i++) {
		if (a[i].age > mage) {
			mage = a[i].age;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i].age == mage) {
			cout << a[i].name << " ";
		}
	}
}

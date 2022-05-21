#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int mage = -1;
	int n;
	cin >> n;
	vector<string> names(n);
	vector<int> ages(n);
	for (int i = 0; i < n; i++) {
		string name;
		int age;
		cin >> name >> age;
		names[i] = name;
		ages[i] = age;
	}
	for (int i = 0; i < ages.size(); i++) {
		if (ages[i] > mage) {
			mage = ages[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (ages[i] == mage) {
			cout << names[i] << " ";
		}
	}
}

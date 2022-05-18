#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

void print_vector(vector<int> &a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> d(0, 10000);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < a.size(); i++) {
		a[i] = d(gen);
	}
	cout << "Текущий массив: ";
	print_vector(a);
	cout << "\n";
	cout << "Сдвиг влево: ";
	//сдвиг влево
	int tmp = a[0];
	for (int i = 0; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	a[n - 1] = tmp;
	print_vector(a);
	cout << "\n";
	cout << "Сдвиг вправо: ";
	//сдвиг вправо
	int tmp2 = a[n - 1];
	for (int i = n - 1; i >= 1; i--) {
		a[i] = a[i - 1];
	}
	a[0] = tmp2; 
	print_vector(a);
}

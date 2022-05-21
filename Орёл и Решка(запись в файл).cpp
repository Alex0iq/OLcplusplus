#include <iostream>
#include <fstream>
#include <random>
using namespace std;
typedef long long ll;
const ll n = 1000000;
void coinflip(ofstream& stream) {
	setlocale(LC_ALL, "ru");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> d(0, 1);
	int orel = 0;
	int reshka = 0;
	for (int k = 1; k <= n; k++) {
		if (k % 100 == 0) {
			stream << "Здесь был АП из 10 А\n";
		}
		if (d(gen) == 0) {
			orel += 1;
			stream << k << ") Орёл\n";
		}
		else {
			reshka += 1;
			stream << k << ") Решка\n";
		}
		
	}
	stream << "Количество орлов: " << orel << "\n";
	stream << "Количество решек: " << reshka;
}

int main() {
	ofstream out("res.txt");
	coinflip(out);
}

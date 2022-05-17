#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<bool> is_prime(n + 1, true); //заполняем массив n+1 
	//элементами true
	for (int j = 2; j <= is_prime.size(); j++) {
		for (int y = j * 2; y <= n; y += j) {
			//пробегаемся по всем числам и вычеркиваем их делители
			//с шагом j
			is_prime[y] = false;
		}
	}
	for (int x = 2; x <= n; x++) {
		if (is_prime[x]) {
			cout << x << " ";
		}
	}
	return 0;
}

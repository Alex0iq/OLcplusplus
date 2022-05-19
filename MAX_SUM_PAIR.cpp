#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Максимальная сумма элементов расстояние между которыми
//больше или равно 5
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	int max_sum = -1e5;
	for (int i = 0; i < a.size(); i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		for (int k = i + 5; k < n; k++) {
			int pair_sum = a[i] + a[k];
			if (pair_sum > max_sum) {
				max_sum = pair_sum;
			}
		}
	}
	cout << max_sum;
	return 0;
}

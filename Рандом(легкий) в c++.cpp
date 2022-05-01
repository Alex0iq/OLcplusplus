#include <iostream>
#include <random>
#include <cstdio>
#include <time.h>
using namespace std;

int myrand() {
	return (rand() << 15) | rand(); //битово сдвигаем на 15 для большего рандома
}
int main() {
	srand(time(0)); //случайный сид для рандома :)
	for (int i = 1; i <= 5; i++) {
		cout << myrand() << " ";
	}
	return 0;
}

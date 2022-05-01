#include <iostream>
#include <random>
#include <cstdio>
#include <time.h>
using namespace std;

//int myrand() {
//	return (rand() << 15) | rand(); //битово сдвигаем на 15 для большего рандома
//}
int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> d(0, 1000000000);
	cout << d(gen);
	return 0;
}

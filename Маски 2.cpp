#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int mask, i;
	cin >> mask >> i;

	mask | (1 << i); //добавление числа в множество
	mask & (~(1 << i)); //удаление числа из множества
	mask ^ (1 << i); // ^(XOR) == не равно
	mask & (1 << i); //проверить на наличие числа в множестве
}

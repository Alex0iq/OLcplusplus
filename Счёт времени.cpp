#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	//18:45:36
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	cout << h << " " << m << " " << s;
	return 0;
}

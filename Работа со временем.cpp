#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int h, m;
	char c;
	scanf("%d:%d %c", &h, &m, &c);
	h %= 12;
	if (c == 'p') {
		h += 12;
	}
	printf("%02d:%02d\n", h, m);
	return 0;
}

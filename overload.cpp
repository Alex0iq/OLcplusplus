#include <iostream>
using namespace std;

struct Pair
{
	int a = 0, b = 0;
	void add(int x, int y) {
		a += x;
		b += y;
	}
	Pair() {};
	Pair(int a_, int b_) {
		a = a_;
		b = b_;
	}
	void print() {
		cout << a << '\n' << b << '\n';
	}
	~Pair()
	{
		cout << "Pair is dead now" << "\n";
	}
	bool operator ==(const Pair& other) {
		return a == other.a && b == other.b;
	}
};

int main() {
	Pair p(2, 3);
	Pair p1(3, 4);
	p.add(5, 4);
	p.print();
	if (!(p == p1)) {
		cout << "kek" << "\n";
	}
	else {
		cout << "lol" <<"\n";
	}
	return 0;
}

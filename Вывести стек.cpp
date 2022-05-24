#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

void print_stack(stack<int>& s) {
	vector<int> tmp;
	while (!s.empty()) {
		tmp.push_back(s.top());
		s.pop();
	}
	reverse(tmp.begin(), tmp.end());
	for (int i = 0; i < tmp.size(); i++) {
		cout << tmp[i];
	}
}

int main() {
	stack<int> s;
	s.push(3);
	s.push(7);
	s.push(2);
	s.push(4);
	print_stack(s);
}

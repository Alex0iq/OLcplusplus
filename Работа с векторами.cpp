#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	vector<int> a(5, 101); //5 раз по 101
	a.push_back(1); //добавление элемента в конец массива
	a.pop_back(); // удаление последнего элемента массива
	for (auto i = a.begin(); i != a.end(); ++i){
		cout << *i << " ";
	}
	a.begin(); //указатель на начало вектора
	a.end(); //указатель на элемент, следующий за концом
	//a.end - a.begin = a.size()	
	//a.back последний элемент вектора
}

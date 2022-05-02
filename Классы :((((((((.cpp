#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Date
{
	int year, month, day;
};
struct Man //для олимпиад лучше использовать структуры :)
	//class для ООП(public, private, protected)
{
	Date birth;
	string name;
	int height;
	int weight;
	bool sex;
	Man() {};
	Man(string name) : name(name), weight(1000) {
		height = 500;
	}
	~Man()
	{
		cout << name << "died :("; 
	}
};


int main() {
	
	Man Bob("Bob");
	Man Jack;
	cout << Bob.height << '\n' << Bob.weight << '\n';
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Date {
	int year, month, day;
};

struct Man
{
	string name;
	Date birth;
	int height;
	int weight;
	bool sex;

	Man() {} //констуктор по умолчанию

	/*Man(string name) :name(name), weight(1000) {
		height = 500;
	}*/

	Man(string name_) {
		name = name_;
		weight = 1000;
		height = 500;
	}
	Man(int height_) {
		height = height_;
		weight = 50;
		sex = false;
	}
	void print() {
		cout << name << "\n" << weight << "\n" << height << "\n";
	}
	~Man()
	{
		cout << name << " died :(\n";
	}
};

int main() {
	Man User("AP");
	User.print();
	return 0;
}

/*console output{
	AP
	1000
	500
	AP died :(
}
*/

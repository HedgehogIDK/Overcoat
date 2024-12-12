#include <iostream>
#include "Overcoat.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	Overcoat obj_first{"ABIBA","Куртка"};
	Overcoat obj_Second{"YWER", "Рубашка"};

	obj_first.print();
	obj_Second.print();

	if (obj_first > obj_Second) {
		cout << "Первая больше" << endl;
	}
	else if (obj_first == obj_Second) {
		cout << "Они одинаковые" << endl;
	}
	else {
		cout << "Вторая больше" << endl;
	}

	obj_first = obj_Second;

	if (obj_first > obj_Second) {
		cout << "Вторая больше";
	}
	else if (obj_first == obj_Second) {
		cout << "Они одинаковые";
	}
	else {
		cout << "Первая больше";
	}

	return 0;
}
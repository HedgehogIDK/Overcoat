#include <iostream>
#include "Overcoat.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	Overcoat obj_first{"ABIBA","������"};
	Overcoat obj_Second{"YWER", "�������"};

	obj_first.print();
	obj_Second.print();

	if (obj_first > obj_Second) {
		cout << "������ ������" << endl;
	}
	else if (obj_first == obj_Second) {
		cout << "��� ����������" << endl;
	}
	else {
		cout << "������ ������" << endl;
	}

	obj_first = obj_Second;

	if (obj_first > obj_Second) {
		cout << "������ ������";
	}
	else if (obj_first == obj_Second) {
		cout << "��� ����������";
	}
	else {
		cout << "������ ������";
	}

	return 0;
}
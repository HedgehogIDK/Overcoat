#pragma once
#include <iostream>

using namespace std;

class Overcoat
{
	string NameBrand;
	string Type;
	int cost;

public:
	Overcoat():Overcoat(nullptr, nullptr,1){}
	explicit Overcoat(string NameBrand_p):Overcoat(NameBrand_p, nullptr,1) {}
	Overcoat(string NameBrand_p, string Type_p) :Overcoat(NameBrand_p, Type_p, 1) {}
	Overcoat(string NameBrand_p, string Type_p, int cost_p):NameBrand{ NameBrand_p }, Type{ Type_p }, cost{ cost_p }{}

	//Конструктор копирования
	Overcoat(const Overcoat& obj);
	
	//Аксессоры
	void set_NameBrand(const char* NameBrand_p);
	void set_Type(const char* Type_p);
	void set_Cost(int cost_p);
	string get_NameBrand() const { return NameBrand; };
	string get_Type()const  { return Type; };
	int get_Cost() { return cost; }

	//Методы
	void print()const{ cout << NameBrand << "/" << Type << endl; }

	//Перегрузки
    bool operator==(const Overcoat& obj);
	bool operator<(const Overcoat& obj);
	bool operator>(const Overcoat& obj);
	Overcoat& operator=(const Overcoat& obj);
};


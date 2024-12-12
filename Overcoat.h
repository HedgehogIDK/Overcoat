#pragma once
#include <iostream>

using namespace std;

class Overcoat
{
	string NameBrand;
	string Type;

public:
	Overcoat():Overcoat(nullptr, nullptr){}
	explicit Overcoat(string NameBrand_p):Overcoat(NameBrand_p, nullptr) {}
	Overcoat(string NameBrand_p, string Type_p) :NameBrand{ NameBrand_p }, Type{ Type_p } {}

	//����������� �����������
	Overcoat(const Overcoat& obj);
	
	//���������
	void set_NameBrand(const char* NameBrand_p);
	void set_Type(const char* Type_p);

	//����������
	bool operator==(Overcoat&& obj);
	bool operator<(Overcoat&& obj);
	bool operator>(Overcoat&& obj);
	Overcoat operator=(Overcoat&& obj);
};


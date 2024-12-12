#include "Overcoat.h"

Overcoat::Overcoat(const Overcoat& obj) {
	NameBrand = obj.NameBrand;
	Type = obj.Type;
}

void Overcoat::set_NameBrand(const char* NameBrand_p) {
	NameBrand = NameBrand_p;
}

void Overcoat::set_Type(const char* Type_p) {
	Type = Type_p;
}

bool Overcoat::operator==(Overcoat&& obj) {
	if (NameBrand == obj.NameBrand && Type == obj.Type)
		return true;
	else
		return false;
}

bool Overcoat::operator<(Overcoat&& obj) {
	if (NameBrand < obj.NameBrand && Type < obj.Type)
		return true;
	else
		return false;
}

bool Overcoat::operator>(Overcoat&& obj) {
	if (NameBrand > obj.NameBrand && Type > obj.Type)
		return true;
	else
		return false;
}

Overcoat Overcoat::operator=(Overcoat&& obj) {
	if (!(this == &obj)) {
		NameBrand = obj.NameBrand;
		Type = obj.Type;
	}
	return *this;
}
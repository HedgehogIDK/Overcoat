#include "Overcoat.h"

Overcoat::Overcoat(const Overcoat& obj) {
	NameBrand = obj.NameBrand;
	Type = obj.Type;
}

void Overcoat::set_NameBrand(const char* NameBrand_p) { NameBrand = NameBrand_p; }

void Overcoat::set_Type(const char* Type_p) { Type = Type_p; }

void Overcoat::set_Cost(int cost_p) { cost = cost_p; }

bool Overcoat::operator==(const Overcoat& obj) {
	return NameBrand == obj.NameBrand && Type == obj.Type && cost == obj.cost;
}

bool Overcoat::operator<(const Overcoat& obj) {
	return NameBrand < obj.NameBrand && Type < obj.Type && cost < obj.cost;
}

bool Overcoat::operator>(const Overcoat& obj) {
	return NameBrand > obj.NameBrand && Type > obj.Type && cost > obj.cost;
}

Overcoat& Overcoat::operator=(const Overcoat& obj) {
	if (!(this == &obj)) {
		NameBrand = obj.NameBrand;
		Type = obj.Type;
		cost = obj.cost;
	}
	return *this;
}
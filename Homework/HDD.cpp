#include "HDD.h"
#include <iostream>
using namespace std;

HDD::HDD(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

HDD::HDD(const char* mod, double pr) : HDD(mod)
{
	price = pr;
}

HDD::~HDD()
{
	delete[] model;
	price = 0;
}

HDD::HDD(const HDD& b)
{
	this->model = new char[strlen(b.model) + 1];
	strcpy_s(this->model, strlen(b.model) + 1, b.model);
	price = b.price;
	cout << "HDD Copy constructor" << endl;
}

void HDD::SetModel(const char* mod)
{
	if (this->model != nullptr) {
		delete[] model;
	}
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void HDD::SetPrice(double pr)
{
	if (pr > 1000) {
		price = pr;
	}
}

const char* HDD::GetModel() const
{
	return model;
}

double HDD::GetPrice() const
{
	return price;
}

void HDD::Print() const
{
	cout << "HDD Model = " << model << "\tPrice: " << price << endl;
}
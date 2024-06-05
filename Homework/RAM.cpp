#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

RAM::RAM(const char* mod, double pr) : RAM(mod)
{
	price = pr;
}

RAM::~RAM()
{
	delete[] model;
	price = 0;
}

RAM::RAM(const RAM& b)
{
	this->model = new char[strlen(b.model) + 1];
	strcpy_s(this->model, strlen(b.model) + 1, b.model);
	price = b.price;
	cout << "RAM Copy constructor" << endl;
}

void RAM::SetModel(const char* mod)
{
	if (this->model != nullptr) {
		delete[] model;
	}
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void RAM::SetPrice(double pr)
{
	if (pr > 1000) {
		price = pr;
	}
}

const char* RAM::GetModel() const
{
	return model;
}

double RAM::GetPrice() const
{
	return price;
}

void RAM::Print() const
{
	cout << "RAM Model = " << model << "\tPrice: " << price << endl;
}
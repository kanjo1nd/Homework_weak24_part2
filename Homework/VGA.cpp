#include "VGA.h"
#include <iostream>
using namespace std;

VGA::VGA(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

VGA::VGA(const char* mod, double pr) : VGA(mod)
{
	price = pr;
}

VGA::VGA(const char* mod, double pr, int mem) : VGA(mod, pr)
{
	memory = mem;
}

VGA::~VGA()
{
	delete[] model;
	price = 0;
}

VGA::VGA(const VGA& b)
{
	this->model = new char[strlen(b.model) + 1];
	strcpy_s(this->model, strlen(b.model) + 1, b.model);
	price = b.price;
	memory = b.memory;
	cout << "VGA Copy constructor" << endl;
}

void VGA::SetModel(const char* mod)
{
	if (this->model != nullptr) {
		delete[] model;
	}
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void VGA::SetPrice(double pr)
{
	if (pr > 1000) {
		price = pr;
	}
}

const char* VGA::GetModel() const
{
	return model;
}

double VGA::GetPrice() const
{
	return price;
}

void VGA::Print() const
{
	cout << "VGA Model = " << model << "\tPrice: " << price << "\tMemory: " << memory << endl;
}
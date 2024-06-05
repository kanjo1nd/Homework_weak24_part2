#include "CPU.h"
#include <iostream>
using namespace std;

CPU::CPU(const char* mod)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

CPU::CPU(const char* mod, double pr) : CPU(mod)
{
	price = pr;
}

CPU::~CPU()
{
	delete[] model;
	price = 0;
}

CPU::CPU(const CPU& b)
{
	this->model = new char[strlen(b.model) + 1];
	strcpy_s(this->model, strlen(b.model) + 1, b.model);
	price = b.price;
	cout << "CPU Copy constructor" << endl;
}

void CPU::SetModel(const char* mod)
{
	if (this->model != nullptr) {
		delete[] model;
	}
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void CPU::SetPrice(double pr)
{
	if (pr > 1000) {
		price = pr;
	}
}

const char* CPU::GetModel() const
{
	return model;
}

double CPU::GetPrice() const
{
	return price;
}

void CPU::Print() const
{
	cout << "CPU Model = " << model << "\tPrice: " << price << endl;
}
#include "Laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop(const char* mod, HDD hd, RAM rm, CPU cp, VGA vg) : hdd(hd), ram(rm), cpu(cp), vga(vg)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
	price = hdd.GetPrice() + ram.GetPrice() + cp.GetPrice() + vg.GetPrice() + 2000;
	c_createdC += 4;
}

Laptop::~Laptop()
{
	delete[] model;
}

double Laptop::GetPrice() const
{
	return price;
}

void Laptop::Print() const
{
	this->hdd.Print();
	this->ram.Print();
	this->cpu.Print();
	this->vga.Print();
	cout << "Laptop model: " << model << "\t Price: " << price << endl;
}

void Laptop::InfoAboutC()
{
	cout << "Cteated c: " << c_createdC << endl;
}

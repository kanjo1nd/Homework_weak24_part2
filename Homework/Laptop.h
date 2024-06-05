#pragma once
#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"
class Laptop
{
	HDD hdd;
	RAM ram;
	CPU cpu;
	VGA vga;
	char* model;
	double price;
	static int c_createdC;
public:
	Laptop() = default;
	Laptop(const char* mod, HDD hd, RAM rm, CPU cp, VGA vg);
	~Laptop();
	double GetPrice() const;
	void Print() const;
	static void InfoAboutC();
};
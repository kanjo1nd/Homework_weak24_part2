#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"
#include "Laptop.h"
#include <iostream>
using namespace std;

int Laptop::c_createdC = 0;

int main() {
	HDD obj1("Asus", 2000);
	CPU obj2("Intel", 3000);
	RAM obj3("HyperX", 2540);
	VGA obj4("RTX 3090", 12512, 3243);
	Laptop obj("HP", obj1, obj3, obj2, obj4);
	obj.Print();
}
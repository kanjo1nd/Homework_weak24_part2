#pragma once
class CPU
{
	char* model;
	double price;
public:
	CPU() = default;
	CPU(const char* mod);
	CPU(const char* mod, double pr);
	~CPU();
	CPU(const CPU& b);
	void SetModel(const char* mod);
	void SetPrice(double pr);
	const char* GetModel() const;
	double GetPrice() const;
	void Print() const;
};


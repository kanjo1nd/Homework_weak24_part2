#pragma once
class VGA
{
	char* model;
	int memory;
	double price;
public:
	VGA() = default;
	VGA(const char* mod);
	VGA(const char* mod, double pr);
	VGA(const char* mod, double pr, int mem);
	~VGA();
	VGA(const VGA& b);
	void SetModel(const char* mod);
	void SetPrice(double pr);
	const char* GetModel() const;
	double GetPrice() const;
	void Print() const;
};


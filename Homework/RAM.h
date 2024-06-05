#pragma once
class RAM
{
	char* model;
	double price;
public:
	RAM() = default;
	RAM(const char* mod);
	RAM(const char* mod, double pr);
	~RAM();
	RAM(const RAM& b);
	void SetModel(const char* mod);
	void SetPrice(double pr);
	const char* GetModel() const;
	double GetPrice() const;
	void Print() const;
};


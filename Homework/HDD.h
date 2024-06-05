#pragma once
class HDD
{
	char* model;
	double price;
public:
	HDD() = default;
	HDD(const char* mod);
	HDD(const char* mod, double pr);
	~HDD();
	HDD(const HDD& b);
	void SetModel(const char* mod);
	void SetPrice(double pr);
	const char* GetModel() const;
	double GetPrice() const;
	void Print() const;
};


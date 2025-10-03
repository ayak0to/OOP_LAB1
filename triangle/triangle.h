#pragma once
struct triangle
{
private: 
	double first = 0, second = 0, fun = 0;

public: 
	triangle& Init(double a, double b);
	void Read();
	void Display() const;
	triangle& hypotenuse();
};

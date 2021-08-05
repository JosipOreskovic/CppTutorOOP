#pragma once
#include <iostream>

// Base class

class MyClass
{
	int x;
	int y;
	static int si;
public:
	MyClass() : x(0), y(0) { std::cout << __func__ << " default constructor" << std::endl; }
	MyClass(const int x, const int y) : x(x), y(y) { std::cout << __func__ << " 1. overload constructor" << std::endl; }
	MyClass(const MyClass& mc)
	{
		this->x = mc.x;
		this->y = mc.y;
		std::cout << __func__ << " copy constructor" << std::endl;
	}
	MyClass& operator=(const MyClass& mc)
	{
		this->x = mc.x;
		this->y = mc.y;
		std::cout << __func__ << " = operator" << std::endl;
		return *this;
	}
	~MyClass() { std::cout << __func__ << " destructor" << std::endl; }

	friend std::ostream& operator<<(std::ostream& os, const MyClass& mc);
	friend MyClass operator+(const MyClass& m1, const MyClass& m2);


	int GetX();
	int GetY();
	void SetX(int x);
	void SetY(int y);
	void Func();
	virtual void VirtualFunction();
	static void FuncStat();
};

#pragma once
#include <iostream>

// Base class

class MyClass
{
	int m_x;
	int m_y;
	int* m_pi;

	static int s_i;
	
public:
	MyClass();
	MyClass(const int x, const int y);

	MyClass(const MyClass& mc); // Copy constructor
	
	MyClass& operator=(const MyClass& mc); // Operator = overloading

	virtual ~MyClass();

	int GetX();
	int GetY();
	void SetX(int x);
	void SetY(int y);
	static int GetI();
	void Func();
	virtual void VirtualFunction();
	static void StaticFunct();

	friend std::ostream& operator<<(std::ostream& os, const MyClass& mc);
	friend MyClass operator+(const MyClass& m1, const MyClass& m2);
};

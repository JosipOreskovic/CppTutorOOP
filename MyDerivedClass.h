#pragma once
#include <iostream>
#include "MyClass.h"

class MyDerivedClass : public MyClass
{
	int m_z;
public:
	MyDerivedClass() : MyDerivedClass(0,0,0) { std::cout << __func__ << " default constructor" << std::endl; }
	MyDerivedClass(const int x, const int y, const int z) : MyClass(x,y), m_z(z) { std::cout << __func__ << " 1. overload constructor" << std::endl; }
	int GetZ();
	void Func(); //Hides non-virtual function in MyClass
	void VirtualFunction() override;
};


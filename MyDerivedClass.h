#pragma once
#include <iostream>
#include "MyClass.h"

class MyDerivedClass : public MyClass
{
	int z;
public:
	MyDerivedClass() : MyClass(), z(0) { std::cout << __func__ << " default constructor" << std::endl; }
	MyDerivedClass(const int x, const int y, const int z) : MyClass(x,y), z(z) { std::cout << __func__ << " 1. overload constructor" << std::endl; }
	int GetZ();
	void Func();
	void VirtualFunction();
};


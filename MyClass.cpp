#include <iostream>
#include "MyClass.h"

int MyClass::GetX() { return x; }
int MyClass::GetY() { return y; }
void MyClass::SetX(int x) { this->x = x; }
void MyClass::SetY(int y) { this->y = y; }

void MyClass::Func()
{
	std::cout << __func__ << " in base class MyClass." << std::endl;
}

void MyClass::VirtualFunction()
{
	std::cout << __func__ << " in base class MyClass." << std::endl;
}

void MyClass::FuncStat()
{

}

// operator overloading - friend functions (not class member functions)

std::ostream& operator<<(std::ostream& os, const MyClass& mc)
{
	os << mc.x << " " << mc.y << std::endl;
	return os;
}


MyClass operator+(const MyClass& m1, const MyClass& m2)
{
	return MyClass(m1.x + m2.x, m1.y + m2.y);
}



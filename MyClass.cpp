#include <iostream>
#include "MyClass.h"

MyClass::MyClass() : MyClass(0,0)
{
	m_pi = new int(20);
	std::cout << __func__ << " default constructor" << std::endl;
}
MyClass::MyClass(const int x, const int y) : m_x(x), m_y(y)
{
	m_pi = new int(20);
	std::cout << __func__ << " 1. overload constructor" << std::endl;
}

MyClass::~MyClass()
{
	delete m_pi;
	std::cout << __func__ << " destructor" << std::endl;
}

MyClass::MyClass(const MyClass& mc)
{
	m_pi = new int(*(mc.m_pi)); // Deep copy
	m_x = mc.m_x;
	m_y = mc.m_y;
	std::cout << __func__ << " copy constructor" << std::endl;
}

MyClass& MyClass::operator=(const MyClass& mc)
{
	m_pi = new int(*(mc.m_pi)); // Deep copy
	m_x = mc.m_x;
	m_y = mc.m_y;
	std::cout << "Overloaded " << __func__ << std::endl;
	return *this;
}

int MyClass::GetX() { return m_x; }
int MyClass::GetY() { return m_y; }
void MyClass::SetX(int x) { m_x = x; }
void MyClass::SetY(int y) { m_y = y; }
int MyClass::GetI() { return s_i; }

void MyClass::Func()
{
	std::cout << __func__ << " in base class MyClass." << std::endl;
}

void MyClass::VirtualFunction()
{
	std::cout << __func__ << " in base class MyClass." << std::endl;
}

void MyClass::StaticFunct()
{
	++s_i;
}

// operator overloading - friend functions (not class member functions)

std::ostream& operator<<(std::ostream& os, const MyClass& mc)
{
	os << mc.m_x << " " << mc.m_y << std::endl;
	return os;
}


MyClass operator+(const MyClass& m1, const MyClass& m2)
{
	return MyClass(m1.m_x + m2.m_x, m1.m_y + m2.m_y);
}

int MyClass::s_i = 10;



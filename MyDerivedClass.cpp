#include "MyDerivedClass.h"

int MyDerivedClass::GetZ() { return m_z; }

void MyDerivedClass::Func()
{
	std::cout << __func__ << " in child class MyClass." << std::endl;
}

void MyDerivedClass::VirtualFunction()
{
	std::cout << __func__ << " in child class MyDerivedClass." << std::endl;
}
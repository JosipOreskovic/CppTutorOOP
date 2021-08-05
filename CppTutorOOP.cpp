#include <iostream>
#include "MyClass.h"
#include "MyDerivedClass.h"

void NewTopic();

int main()
{
	std::cout << "OBJECTS DECLARATION AND INITALIZATION" << std::endl;
	std::cout << std::endl;

	MyClass a;
	MyClass b(1, 1);
	MyClass c = b;
	MyClass d(a);

	NewTopic();

	MyClass* pc = new MyClass;
	delete pc;

	NewTopic();

	if (true)
	{
		MyClass e; //new object, constructor called
	} // block end, object destroyed, destructor called

	NewTopic();

	std::cout << "Getting object data members with member functions (getters).";
	std::cout << std::endl;
	std::cout << a.GetX() << " " << a.GetY() << std::endl;
	std::cout << b.GetX() << " " << b.GetY() << std::endl;
	std::cout << c.GetX() << " " << c.GetY() << std::endl;
	std::cout << d.GetX() << " " << d.GetY() << std::endl;

	NewTopic();

	std::cout << "Operator << overloading" << std::endl;
	std::cout << std::endl;

	std::cout << a << b << c << d << std::endl;

	std::cout << std::endl;

	std::cout << "Operator + overloading" << std::endl;
	std::cout << std::endl;
	std::cout << (b + c) << std::endl;

	NewTopic();

	MyDerivedClass da;
	MyDerivedClass db(1, 2, 3);
	std::cout << "Getting derived class object data members with member functions (getters).";
	std::cout << std::endl;
	std::cout << db.GetX() << " " << db.GetY() << " " << db.GetZ() << std::endl;

	NewTopic();

	a.Func();
	da.Func();
	a.VirtualFunction();
	da.VirtualFunction();

	NewTopic();

	std::cout << "The end. But pay attention, it will be more after..." << std::endl;
	return 0;

}

void NewTopic()
{
	std::cout << std::endl;
	std::cin.clear();
	fflush(stdin);
	std::cout << std::endl << "Press any key to continue...";
	std::cin.ignore();
	system("CLS");
}
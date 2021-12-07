#include "Base.hpp"

class A: public Base {};
class B: public Base {};
class C: public Base {};


Base* generate()
{
	srand (time(NULL));
	switch(rand() % 3)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			break;
	}
	return new C();
}

void identify(Base *p)
{
	if (dynamic_cast <A *> (p)) //The dynamic_cast keyword casts a datum from one pointer or reference type to another, check to ensure the validity of the cast.
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B *> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C *> (p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try{
		identify(&p);
	}
	catch (const std::exception &e){
		std::cout << e.what() << '\n';
	}
}
  
int main( void )
{
	Base *basing = generate();
	std::cout << "Unsing a pointer: " << std::endl;
	identify(basing);
	std::cout << "Unsing the reference: " << std::endl;
	identify(basing);

	delete basing;
	return 0;
}

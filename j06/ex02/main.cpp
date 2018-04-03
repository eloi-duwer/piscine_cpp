#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

class Base {
	public:
		virtual ~Base( void ) {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate ( void ) {

	Base *pt;
	int nb = rand() % 3;
	if (nb == 0) {
		pt = new A;
		std::cout << "A created" << std::endl;
	}
	else if (nb == 1) {
		pt = new B;
		std::cout << "B created" << std::endl;
	}
	else {
		pt = new C;
		std::cout << "C created" << std::endl;
	}
	return pt;

}

void identify_from_pointer( Base *p ) {
	A	*a;
	B	*b;
	C	*c;

	if ((a = dynamic_cast<A *>(p)) != NULL)
		std::cout << "A from pointer" << std::endl;
	else if ((b = dynamic_cast<B *>(p)) != NULL)
		std::cout << "B from pointer" << std::endl;
	else if ((c = dynamic_cast<C *>(p)) != NULL)
		std::cout << "C from pointer" << std::endl;
	else
		std::cout << "Not a valid pointer" << std::endl;
}

void identify_from_reference( Base &p ) {

	try {
 		A	a = dynamic_cast<A &>(p);
		std::cout << "A from reference" << std::endl;
	}
	catch (std::exception &e) {
		try {
			B	b = dynamic_cast<B &>(p);
			std::cout << "B from reference" << std::endl;
		}
		catch (std::exception &e) {
			try {
				C	c = dynamic_cast<C &>(p);
				std::cout << "C from reference" << std::endl;
			}
			catch (std::exception &e) {
				std::cout << "Not a valid reference" << std::endl;
			}
		}
	}
}

int main() {

	Base *pt;

	srand(time(NULL));
	int i = 0;
	while (i < 12) {
		pt = generate();
		identify_from_pointer( pt );
		identify_from_reference( *pt );
		std::cout << std::endl;
		delete pt;
		++i;
	}
	return 0;
}

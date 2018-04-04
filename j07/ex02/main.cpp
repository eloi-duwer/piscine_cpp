#include "Array.cpp"

int main() {

	Array<unsigned int> a(5);
	unsigned int i = 0;

	std::cout << "Initialization at 0: " << a << std::endl;
	while (i < a.size()) {
		a[i] = i;
		++i;
	}
	std::cout << a << std::endl;

	Array<unsigned int>b(a);
	std::cout << b << std::endl;

	i = 0;
	while (i < b.size()) {
		b[i] *= 2;
		++i;
	}
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	int j = -2;
	while (j <= static_cast<int>(b.size() + 1)) {
		try {
			std::cout << "Trying to access the " << j << "'nth element of Array b: ";
			std::cout << b[j] << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		++j;
	}

	Array<char>c;
	try { 
		std::cout << "No preventive allocation: ";
		std::cout << c[0] << std::endl;
	} catch (std::exception &e) {
		std::cout<< e.what() << std::endl;
	}
	c = Array<char>(2);
	std::cout << c << std::endl;
	c[0] = '4';
	c[1] = '2';
	std::cout << c << std::endl;
}

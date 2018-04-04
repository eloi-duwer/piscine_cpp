
#include <iostream>
#include "iter.cpp"

template<typename T>
void times_two(T &x) {
	x = 2 * x;
}

template<typename T>
void print(T &x) {
	std::cout << x << std::endl;
}

template<typename T>
void add_one(T &x) {
	x += 1;
}

template<typename T>
void divide_by_two(T &x) {
	x = x / 2;
}

typedef void (*pt_const_int)(int const &);
typedef void (*pt_int)(int &);

typedef void (*pt_const_char)(char const &);
typedef void (*pt_char)(char &);

typedef void (*pt_const_double)(double const &);
typedef void (*pt_double)(double &);

int main() {
	{
		double tab[] = {0,1,2,3,4,5};
		iter<double, pt_const_int, const int>(tab, 6, &print);
		std::cout << std::endl;
		iter<double, pt_double, double>(tab, 6, &divide_by_two);
		iter<double, pt_const_double, const double>(tab, 6, &print);
		std::cout << std::endl;
		iter<double, pt_const_int, const int>(tab, 6, &print);
		std::cout << std::endl;
	}
	{
		char tab[] = {"abcdef"};
		iter<char, pt_const_char, const char>(tab, 6, &print);
		std::cout << std::endl;
		iter<char, pt_int, int>(tab, 6, &add_one);
		iter<char, pt_const_char, const char>(tab, 6, &print);
		std::cout << std::endl;
	}
	{
		double tab[] = {35, 55.5, 57, 58, 60.5, 22.5, 58, 59.5, 55.5};
		iter<double, pt_const_char, const char>(tab, 9, &print);
		std::cout << std::endl;
		iter<double, pt_double, double>(tab, 9, &times_two);	
		iter<double, pt_const_char, const char>(tab, 9, &print);
		std::cout << std::endl;
	}

}

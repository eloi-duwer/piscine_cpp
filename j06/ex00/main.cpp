#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <iomanip>

void	display_char(double nb) {
	std::cout << "char: ";
	if (nb == INFINITY || nb == -INFINITY || nb != nb)
		std::cout << "impossible";
	else if (nb <= 31 || nb >= 128)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(nb) << "'";
	std::cout << std::endl;
}

void	display_int(float nb) {
	std::cout << "int: ";
	if (nb < static_cast<float>(std::numeric_limits<int>::min()) || nb > static_cast<float>(std::numeric_limits<int>::max()))
		std::cout << "out of range";
	else if (nb == INFINITY || nb == -INFINITY || nb != nb)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(nb);
	std::cout << std::endl;

}

int main(int argc, char **argv) {

	if(argc != 2)
		return -1;
	if (argv[1][1] == '\0' && (argv[1][0] > '9' || argv[1][0] < '0')) {
		display_char(static_cast<int>(argv[1][0]));
		std::cout << "int: impossible" << std::endl << "float: impossible" << std::endl << "double: impossible" << std::endl;
		return 0;
	}
	double nb = std::atof(argv[1]);
	display_char(nb);
	display_int(nb);
	if (static_cast<int>(nb) - nb == 0) {
		std::cout << std::fixed;
		std::cout << std::setprecision(1) << "float: " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << std::setprecision(1) << "double: " << nb << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
		std::cout<< "double: " << nb << std::endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main (int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Usage: ./replace <filename> <string_to_replace> <replacement_string>" << std::endl;
		return -1;
	}

	if (std::string(argv[2]).length() == 0) {
		std::cout << "String to replace is empty" << std::endl;
		return -1;
	}

	if (std::string(argv[3]).length() == 0) {
		std::cout << "Replacement string is empty" << std::endl;
		return -1;
	}

	if (std::string(argv[3]).find(argv[2]) != std::string::npos) {
		std::cout << "The replacement string is in the string to replace, no infinite loop allowed" << std::endl;
		return -1;
	}

	std::ifstream		file(argv[1]);
	
	if (!file.good()) {
		std::cout << "Invalid input file" << std::endl;
		return -1;
	}

	std::ofstream		result((std::string(argv[1]) + ".REPLACE").data());

	if (!result.good()) {
		std::cout << "Can't open output file" << std::endl;
		return -1;
	}

	size_t			pos;
	std::string		str;

	while (std::getline(file, str)) {
		while ((pos = str.find(argv[2])) != std::string::npos)
			str.replace(pos, std::string(argv[2]).length(), argv[3]);
		result << str << std::endl;
	}
	result.close();
	return 0;
}

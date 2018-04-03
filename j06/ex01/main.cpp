#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

struct Data { std::string s1; int n; std::string s2; };

char	random_alphanumeric( void ) {
	
	int nb = rand() % 62;
	char c;

	if (nb <= 25) {
		c = static_cast<char>(nb) + 'a';
		std::cout << c;
		return c;
	}
	else if (nb <= 51) {
		c = static_cast<char>(nb - 26) + 'A';
		std::cout << c;
		return c;
	}
	else {
		c = static_cast<char>(nb - 52 + static_cast<int>('0'));
		std::cout << c;
		return c;
	}
}

void * serialize( void ) {

	char *pt = new char[20];
	int i = 0;

	std::cout << "Seralized data:" << std::endl;
	while (i < 8) {
		*(pt + i) = random_alphanumeric();
		++i;
	}
	std::cout << std::endl;
	int *nb_pt;
	nb_pt = reinterpret_cast<int *>(pt + 8);
	*nb_pt = rand();
	std::cout << *nb_pt << std::endl;
	i = 0;
	while (i < 8) {
		*(pt + 12 + i) = random_alphanumeric();
		++i;
	}
	std::cout << std::endl;
	return reinterpret_cast<void *>(pt);
}

Data * deserialize ( void * raw ) {
	Data	*ret = new Data;
	char	str[9];
	char	*pt_char = reinterpret_cast<char *>(raw);

	str[8] = '\0';

	std::memcpy(str, pt_char, 8);
	ret->s1 = str;
	ret->n = *(reinterpret_cast<int *>(raw) + 2);
	std::memcpy(str, pt_char + 12, 8);
	ret->s2 = str;
	return ret;
}

int main() {

	srand(time(NULL));

	void *data = serialize();
	Data *ret = deserialize( data );

	std::cout << "Deserialized data:" << std::endl \
	<< ret->s1 << std::endl \
	<< ret->n << std::endl \
	<< ret->s2 << std::endl;
	
	delete reinterpret_cast<char *>(data);
	delete ret;
}


#include <iostream>

template<typename ArrayType, typename FuncType, typename FuncArgType>
void	iter(ArrayType *array, int length, FuncType f) {

	int i = 0;

	while( i < length) {
		FuncArgType val = static_cast<FuncArgType>(array[i]);
		f(val);
		if (val != static_cast<FuncArgType>(array[i]))
			array[i] = static_cast<ArrayType>(val);
		++i;
	}

}

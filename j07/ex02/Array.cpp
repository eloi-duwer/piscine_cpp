#include <cstring>
#include <stdexcept>
#include <iostream>

template < typename T >
class Array {

	public:
		Array( void ) : _array(NULL), _size(0) {}
		Array( unsigned int size) : _array(new T[size]), _size(size) {
			memset(_array, 0, sizeof(T) * _size);
		}
		Array( Array const &src ) : _array(NULL), _size(0) { *this = src; };
		virtual ~Array( void ) { delete [] _array; }

		Array	&operator=(Array const &src) {
			delete [] _array;
			_array = new T[src._size];
			_size = src._size;
			memcpy(_array, src._array, sizeof(T) * src._size);
			return *this;
		}

		T 	&operator[](const int nb) const {
			if (nb < 0 || static_cast<unsigned int>(nb) >= _size)
				throw std::range_error("Attempted access out of the limits");
			return _array[nb];
		}

		unsigned int size( void ) const { return _size; }

	private:
		T		*_array;
		unsigned int	_size;
};

template< typename T >
std::ostream	&operator<<( std::ostream &o, Array<T> const &src ) {

	o << "Array(" << src.size() << "): ";
	unsigned int i = 0;
	while (i < src.size()) {
		o << src[i];
		if (i != src.size() - 1)
			o << ", ";
		++i;
	}
	return o;
}

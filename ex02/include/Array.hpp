#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
template <typename T>
class Array
{
	private:
		unsigned int	size_;
		T*				arr_;
	public:
		Array(void);
		Array(Array const& toCopy);
		Array(unsigned int n);
		~Array();

		Array&	operator=(Array const& toCopy);
		T&		operator[](unsigned int index) const;

		unsigned int	size(void) const;

		class outOfBoundsException: public std::exception
		{
			virtual const char* what(void) const throw();
		};
};

# include "Array.tpp"

#endif // ARRAY_HPP

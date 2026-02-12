#include "iter.hpp"
#include <iostream>
#include <string>

void	funString(std::string& str)
{
	str = "replaced";
}

void	funString2(std::string const& str)
{
	std::cout << str << std::endl;
}

int	main(void)
{
	std::string	arr1[3] = {"vouvou", "test", "bonjour"};

	iter(arr1, 3, funString);
	for (int i = 0; i < 3; i++) {std::cout << arr1[i] << std::endl;}

	std::string const	arr2[3] = {"vouvou", "test", "bonjour"};

	iter(arr2, 3, funString2);
}

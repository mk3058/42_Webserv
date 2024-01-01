#include <iostream>

void	error_handler(std::string str)
{
	std::cout << str << std::endl;
	exit(1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		error_handler("invalid argument");
}
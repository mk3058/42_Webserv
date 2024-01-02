#include "Config.hpp"
#include <fstream>


void	CONFIG::parse(std::string filename)
{
	std::ifstream	conf_file(filename);

	if (conf_file.is_open())
	{
		
	}
	else
		throw std::invalid_argument("can not open file");
}
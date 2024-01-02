#ifndef CONFIG_HPP
#define CONFIG_HPP
#include <vector>
#include <iostream>
#include "Location.hpp"


class CONFIG
{
	private:
	std::vector<int>		port;
	std::string				max_body_size;
	std::string				server_name;
	std::vector<Location>	location_info;

	public:
	void	parse(std::string filename);
};

#endif
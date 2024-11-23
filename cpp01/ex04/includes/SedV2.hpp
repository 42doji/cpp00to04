#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>
#include <string>

class SedV2
{
	public:
		SedV2();
		~SedV2();
		void    replace(std::string filename, std::string s1, std::string s2);
		void    replace(std::string filename, std::string s1, std::string s2, std::string flag);
		void    replace(std::string filename, std::string s1, std::string s2, std::string flag, std::string output);
};

#endif
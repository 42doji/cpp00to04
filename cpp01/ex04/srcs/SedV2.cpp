#include "../includes/SedV2.hpp"

SedV2::SedV2() {}

SedV2::~SedV2() {}

void SedV2::replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string content;
	std::string output = filename + ".replace";

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	while (std::getline(file, line))
	{
		content += line + "\n";
	}
	file.close();
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	std::ofstream new_file(filename.c_str());
	new_file << content;
	new_file.close();
}

void SedV2::replace(std::string filename, std::string s1, std::string s2, std::string flag)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string content;
	std::string output = filename + ".replace";

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	while (std::getline(file, line))
	{
		content += line + "\n";
	}
	file.close();
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	std::ofstream new_file(output.c_str());
	new_file << content;
	new_file.close();
	if (flag == "-i")
	{
		filename = filename + ".replace";
		std::rename(output.c_str(), filename.c_str());
	}
}

void SedV2::replace(std::string filename, std::string s1, std::string s2, std::string flag, std::string output)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string content;

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	while (std::getline(file, line))
	{
		content += line + "\n";
	}
	file.close();
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	std::ofstream new_file(output.c_str());
	new_file << content;
	new_file.close();
	if (flag == "-i")
	{
		filename = output;
		std::rename(output.c_str(), filename.c_str());
	}
}
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void fileOut(std::string	fileName, std::ofstream &ofile)
{
	std::string		line;
	bool			finish;
	std::ifstream	ifile;

	finish = false;
	ifile.open(fileName);
	if (!ifile.is_open())
	{
		std::cerr << "Error: file not found" << std::endl;
		return ;
	}
	while (std::getline(ifile, line))
	{
		if (line.find("finish") != std::string::npos)
		{
			finish = true;
			continue;
		}
		if (finish)
			ofile << line << std::endl;
	}
	ofile << std::endl;
	std::cout << "File " << fileName << " linked" << std::endl;
	ifile.close();
}

int main()
{
	std::ofstream	ofile("sourcecode");
	std::ifstream	ifile("cakmaMakefile");
	std::vector<std::string>	files;
	std::string		line;

	if (!ofile.is_open() || !ifile.is_open())
	{
		std::cerr << "Error: file not found" << std::endl;
		return 1;
	}
	while (std::getline(ifile, line))
		if (!line.empty())
			files.push_back(line);

	for (int i = 0; i < files.size(); i++)
		fileOut(files[i], ofile);

	return 0;
}


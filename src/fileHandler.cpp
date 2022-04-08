#include "../include/fileHandler.hpp"

namespace rf
{
	void fileStatus(ifstream& file, string error)
	{
		bool condition = (!(file.is_open()) || !(file.good()));
		if (condition)
		{
			std::cerr << error << std::endl;
			exit(EXIT_FAILURE);
		}
	}
	ifstream openFile(string path)
	{
		ifstream file;
		file.open(path);
		fileStatus(file, "Error, Opening File!");
		return file;
	}
	void closeFile(ifstream& file)
	{
		if (file.is_open()) file.close();
	}
	bool is_empty(std::ifstream& pFile)
	{
		return pFile.peek() == std::ifstream::traits_type::eof();
	}
}
//------------------------------------------------------------------
namespace wf
{
	void fileStatus(ofstream& file, string error)
	{
		bool condition = (!(file.is_open()) || !(file.good()));
		if (condition)
		{
			std::cerr << error << std::endl;
			exit(EXIT_FAILURE);
		}
	}
	ofstream openFile(string path)
	{
		ofstream file(path, std::ios::app);
		wf::fileStatus(file, "Error, Opening File Writer!!");
		return file;
	}
	void closeFile(ofstream& file)
	{
		if (file.is_open()) file.close();
	}
}
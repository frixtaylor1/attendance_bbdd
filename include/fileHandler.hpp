#pragma once
#include <iostream>
#include <fstream>

using std::ifstream;
using std::ofstream;
using std::string;

namespace rf{
    void fileStatus(ifstream& file, string error);
    ifstream openFile(string path);
    void closeFile(ifstream& file);
    bool is_empty(std::ifstream& pFile);
};
namespace wf{
    void fileStatus(ofstream& file, string error);
    ofstream openFile(string path);
    void closeFile(ofstream& file);
};

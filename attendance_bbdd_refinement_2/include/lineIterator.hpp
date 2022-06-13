#pragma once
#include <iostream>
#include <iterator>

std::istream& operator>>(std::istream& input, std::string& str)
{
    std::getline(input, str);
    return input;
}

void readLineByLine(std::istream& input)
{
    std::istream_iterator<std::string> begin(input);
    std::istream_iterator<std::string> end, it;
    for(it = begin; it != end; *it++)
        std::cout << *it << "\n";
}
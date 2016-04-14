#include <iostream>
#include <string>
#include <cstddef>
inline std::string operator""_s (const char* str, std::size_t) { return std::string(str);}



int main()
{
	auto x = "hello travis! from c++11"_s;
	std::cout << x << std::endl;
}








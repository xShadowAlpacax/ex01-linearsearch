#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;

int main(int argc, char *argv[])
{
	int array[] = { 3, 1, 2 };
	int64_t index = find(0, array, 3);

	double doubles[] = { 3.0, 1.0, 2.0 };
	find(0.0, doubles, 3);

	std::cout << "The index is: " << index << std::endl;
}
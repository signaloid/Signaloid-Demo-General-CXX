#include <iostream>
#include <numeric>
#include <vector>
#include <uxhw.h>

int
main(int argc, char *  argv[])
{
	std::vector<double> vec {
		UxHwDoubleUniformDist(0.0, 1.0),
		UxHwDoubleUniformDist(1.0, 2.0),
	};

	std::cout << "Initial distributions:" << std::endl;
	for (const auto& dist : vec)
	{
		std::cout << dist << std::endl;
	}

	std::adjacent_difference(vec.begin(), vec.end(), vec.begin());

	std::cout << "Differences:" << std::endl;
	for (const auto& diff : vec)
	{
		std::cout << diff << std::endl;
	}

#ifdef DEBUG
	std::cout << "debug message" << std::endl;
#endif

	return 0;
}


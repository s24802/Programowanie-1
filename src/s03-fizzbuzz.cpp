#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int
	int input;
	try {
		input = std::stoi(argv[1]);
	}

	std::cout << "n: " + std::to_string(input) << std::endl;
	if (input % 3 == 0) {
		std:cout << "Fizz";
	}
	if (input % 5 == 0) {
		std::cout << "Buzz";
	} else {
		std::cout << "Ani Fizz ani Buzz";
	}
	return 0;
}

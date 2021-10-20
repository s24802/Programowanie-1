#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int {
	auto const password = std::string{argv[1]};
	auto guessed_password = std::string{};
	do {
	  std::cout << "Guess the password: ";
	  std::getline(std::cin, guessed_password);
	} while (guessed_password != password);
	if (guessed_password == password) {
	  std::cout << "Correct!" << std::endl;
	}
	return 0;
}





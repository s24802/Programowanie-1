#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	int num, guess = 0;
	srand(time(0));
	num = rand() % 100 + 1;
	std::cout << "Zgdadnij numer\n\n";

	do
	{
		std::cout << "Wybierz liczbe  pomiędzy 1 a 100 : ";
		std::cin >> guess;

		if (guess > num)
			std::cout << "Za dużo\n";
		else if (guess < num)
			std::cout << "Za mało\n";
		else
			std::cout << "Brawo, zgadłeś.";
	}while (guess !=num);

	return 0;
}

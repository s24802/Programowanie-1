#include <sstream>
#include <iostream>
#include <s03-student.h>

s24802::Student::Student(std::string imie, std::string nazwisko, std::string nrindex, int semestr, double srednia)
	: imie{imie}, nazwisko{nazwisko}, nrindex{nrindex}, semestr{semestr}, srednia{srednia} {}

auto s24802::Student::to_string() const ->std::string {
	auto output =std::ostringstream{};
	output << "Imię: " << imie << std::endl << "Nazwisko: " << nazwisko <<std::endl << "Numer indeksu: " << nrindex
		<< std::endl
		<< "Semestr: " << semestr << std::endl << "Średnia: " << srednia;

	return output.str();
}

auto main() -> int {
	auto student = s24802::Student{"Jan", "Paweł", "s02137", 1, 4.20};
	std::cout <<student.to_string() << "\n";
	return 0;
}

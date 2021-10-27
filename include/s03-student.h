#ifndef student_h
#define student_h
#include <string>
namespace s24802 {
	class Student {
	public:
		std::string const imie;
		std::string const nazwisko;
		std::string const nrindex;
		int semestr;
		double srednia;

		Student(std::string, std::string, std::string, int, double);
		auto to_string() const -> std::string;
	};
}
#endif

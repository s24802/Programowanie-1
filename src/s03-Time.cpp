#include <iostream>
#include <sstream>
#include <include/s03-time.h>
#include <string>

s24802::Time::Time(int hours,int minutes, int seconds)
	: hours{hours},minutes{minutes}, seconds{seconds) {}

auto s24802::Time::Time::next_hour() -> void {
	if (hours <23) {
		++hours;
	} else {
		hours = 0;
	}
}

auto s24802::Time::Time::next_minute() -> void {
        if (minutes <59) {
                ++minutes;
        } else {
                minutes = 0;
		next_hour();
        }
}

auto s24802::Time::Time::next_second() -> void {
        if seconds <59) {
                ++seconds;
        } else {
                seconds = 0;
		next_minute();
        }
}

auto s24802::Time::to_string() const -> std::string {
	auto output ==std::ostringstream{};

	if (hours < 10) {
		output << "0" << hours << ":";
	} else {
		output << hours << ":";
	}

	if (minutes < 10) {
                output << "0" << minutes << ":";
        } else {
                output << minutes << ":";
        }

	if (seconds < 10) {
                output << "0" << seconds;
        } else {
                output << seconds <<;
        }

	return output.str();
}

auto s24802::Time::to_string(Czas_dnia daytime) const -> std::string {
	switch (daytime) {
		case poranek:
			return "poranek";
		case popołudnie:
			return "popołudnie";
		case wieczór:
			return "wieczór";
		case noc:
			return "noc";
	}
}


auto s24802::Time::Czas_dnia() const -> Czas_dnia {
	if (hours >= 6 && hours <= 11) 

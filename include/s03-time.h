#ifndef time_h
#define time_h
#include <string>

namespace s24802 {
	class Time {
	public:
		int hours;
		int minutes;
		int seconds;
		enum Czas_dnia {
			poranek,
			popołudnie,
			wieczór,
			noc,
		};

		Time() = default;
		Time(int, int, int);

		auto next_hour() -> void;
		auto next_minute() -> void;
		auto next_second() -> void;
		auto time_of_day() const -> Czas_dnia;
		auto count_minutes() const -> std::uint64_t;
		auto count_seconds() const -> std::uint64_t;
		auto to_string(Czas_dnia) const -> std::string;
		auto to_string() const -> std::string;
		auto time_to_midnight() const -> Time;

		auto operator+ (Time const&) const -> Time;
		auto operator- (Time const&) const -> Time;
		auto operator< (Time const&) const -> bool;
		auto operator> (Time const&) const -> bool;
		auto operator== (Time const&) const -> bool;
		auto operator!= (Time const &) const -> bool;
	};
}
#endif

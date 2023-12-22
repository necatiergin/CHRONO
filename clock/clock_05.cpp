/*
	clock::now
	clock::to_time_t(time_point)
	std::ctime
	time_point + duration
*/

#include <iostream>
#include <chrono>

int main()
{
	using namespace std::chrono;
	using Day = duration<int, std::ratio<60 * 60 * 24>>;
	Day one_day{ 1 };

	//system_clock::time_point tp_today = system_clock::now();
	auto tp_today = system_clock::now();
	auto tp_tomorrow = tp_today + one_day;

	auto tt_today = system_clock::to_time_t(tp_today);
	std::cout << "today is: " << ctime(&tt_today);

	auto tt_tomorrow = system_clock::to_time_t(tp_tomorrow);
	std::cout << "tomorrow will be: " << ctime(&tt_tomorrow);
}

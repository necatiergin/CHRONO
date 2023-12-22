#include <chrono>
#include <ctime>
#include <string>
#include <iostream>

std::string to_string(const std::chrono::system_clock::time_point& tp)
{
	std::time_t t = std::chrono::system_clock::to_time_t(tp);
	std::string ts = std::ctime(&t);
	ts.resize(ts.size() - 1);

	return ts;
}


int main()
{
	std::chrono::system_clock::time_point tp;
	std::cout << "epoch: " << to_string(tp) << '\n';
	tp = std::chrono::system_clock::now();
	std::cout << "now: " << to_string(tp) << '\n';
}

#include <iostream>
#include <chrono>

int main()
{
	using namespace std::chrono;

	seconds sec_45{ 45 };
	hours myday(24);
	milliseconds msec{};

	msec += sec_45 + myday;

	std::cout << msec.count() << '\n';
	std::cout << msec << '\n'; //C++20

	--msec;
	msec *= 10;
	std::cout << msec.count() << " ms" << '\n';
	std::cout << msec << '\n'; //C++20

	std::cout << nanoseconds(msec).count() << " ns" << '\n';
	std::cout << nanoseconds(msec) << '\n';

}

#include <chrono>
#include <iostream>
#include <ctime>

int main()
{
	using namespace std::chrono;

	system_clock::time_point tpx; //default ctor (epoch)

	auto timer = system_clock::to_time_t(tpx);
	std::cout << ctime(&timer);

	std::cout << tpx << '\n'; //C++20
}

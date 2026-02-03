#include <iostream>
#include <chrono>

int main()
{
	using namespace std::chrono;

	auto tp = system_clock::now();

	std::cout << tp.time_since_epoch().count() << '\n';
	using Days = duration<int, std::ratio<24 * 60 * 60>>;
	std::cout << duration_cast<Days>(tp.time_since_epoch()).count() << '\n';
}

#include <chrono>
#include <iostream>

//seconds since epoch

int main()
{
	using namespace std::chrono;

	std::cout << duration_cast<seconds>(system_clock::now().time_since_epoch()).count() << '\n';
	std::cout << time_point_cast<seconds>(system_clock::now()).time_since_epoch().count() << '\n';
}

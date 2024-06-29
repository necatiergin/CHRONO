#include <chrono>
#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	using namespace chrono;
	
	system_clock::time_point tpx; //default ctor (epoche)

	auto timer = system_clock::to_time_t(tpx);
	cout << ctime(&timer);

	cout << tpx << '\n'; //C++20
}

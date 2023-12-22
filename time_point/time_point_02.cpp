#include <chrono>
#include <iostream>
#include <ctime>

using namespace std;
using namespace chrono;

int main()
{
	system_clock::time_point tpx; //default ctor (epoche)

	auto timer = system_clock::to_time_t(tpx);
	cout << ctime(&timer);
}

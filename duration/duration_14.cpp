#include <iostream>
#include <chrono>

int main()
{
	using namespace std;
	using namespace std::chrono;

	seconds sec_45{ 45 };
	hours myday(24);
	milliseconds msec{};

	msec += sec_45 + myday;

	cout << msec.count() << '\n';
	cout << msec << '\n'; //C++20

	--msec;
	msec *= 10;
	cout << msec.count() << " ms" << '\n';
	cout << msec << '\n'; //C++20

	cout << nanoseconds(msec).count() << " ns" << '\n';
	cout << nanoseconds(msec) << '\n';

}

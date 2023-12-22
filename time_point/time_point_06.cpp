#include <iostream>
#include <ctime>
#include <chrono>

int main()
{
	using namespace std;
	using namespace std::chrono;

	tm timeinfo{};
	timeinfo.tm_year = 2000 - 1900;   // 2000 yili
	timeinfo.tm_mon = 0;      // ocak
	timeinfo.tm_mday = 1;     // ayin 1'i
	timeinfo.tm_hour = 0;     // saat 00
	std::time_t tt = std::mktime(&timeinfo);

	system_clock::time_point tp = system_clock::from_time_t(tt);
	system_clock::duration dt = system_clock::now() - tp;


	auto nhours = duration_cast<hours> (dt);

	std::cout << "1/1/2000'den gecen saat sayisi: " << nhours.count() << '\n';
}

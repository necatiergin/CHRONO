#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;


template <typename Clock>
void displayClockData()
{
	//std::cout << typeid(typename Clock::duration).name() << "\n";
	using Period = typename Clock::period;  //saatimizin periodu
	if (ratio_less_equal_v<Period, milli>) { //period 1/1000 den yani milisaniyeden küçük ise
		using TT = typename ratio_multiply<Period, kilo>::type;
		cout << fixed;
		cout << static_cast<double>(TT::num) / TT::den << " mili saniye\n";
	}
	else {
		cout << static_cast<double>(Period::num) / Period::den << " saniye\n";
	}

	if (Clock::is_steady)
		std::cout << "ayarlanmayan saat\n";
	else
		cout << "ayarlanabilir saat\n";
}

int main()
{
	cout << "system_clock\n";
	displayClockData<system_clock>();
	std::cout << "\n\n";

	cout << "high resolution clock \n";
	displayClockData<high_resolution_clock>();
	std::cout << "\n\n";

	cout << "steady clock \n";
	displayClockData<steady_clock>();
}

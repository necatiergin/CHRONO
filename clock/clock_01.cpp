#include <iostream>
#include <chrono>

template <typename Clock>
void displayClockData()
{
	//std::cout << typeid(typename Clock::duration).name() << "\n";
	using Period = typename Clock::period;  //period of the clock
	if (std::ratio_less_equal_v<Period, std::milli>) { //if period is less than 1/1000 
		using TT = typename std::ratio_multiply<Period, std::kilo>::type;
		std::cout << std::fixed;
		std::cout << static_cast<double>(TT::num) / TT::den << " milliseconds\n";
	}
	else {
		std::cout << static_cast<double>(Period::num) / Period::den << " seconds\n";
	}

	if (Clock::is_steady)
		std::cout << "monotonic clock\n";
	else
		std::cout << "adjustable clock\n";
}

int main()
{
	using std::cout;
	using namespace std::chrono;

	cout << "system_clock\n";
	displayClockData<system_clock>();
	std::cout << "\n\n";

	cout << "high resolution clock \n";
	displayClockData<high_resolution_clock>();
	std::cout << "\n\n";

	cout << "steady clock \n";
	displayClockData<steady_clock>();
}

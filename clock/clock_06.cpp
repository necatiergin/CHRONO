#include <iostream>
#include <chrono>
#include <typeinfo>

int main()
{
	using namespace std::chrono;

	//using clock = system_clock;
	//using clock = steady_clock;
	using clock = high_resolution_clock;

	std::cout << "period     =  " << typeid(clock::period).name() << '\n';
	std::cout << "duration   =  " << typeid(clock::duration).name() << '\n';
	std::cout << "rep        =  " << typeid(clock::rep).name() << '\n';
	std::cout << "time_point =  " << typeid(clock::time_point).name() << '\n';
}

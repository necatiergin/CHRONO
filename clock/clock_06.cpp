#include <iostream>
#include <chrono>
#include <typeinfo>

int main()
{
	using namespace std;
	using namespace chrono;
	
	//using clock = system_clock;
	//using clock = steady_clock;
	using clock = high_resolution_clock;

	cout << "period     =  " << typeid(clock::period).name() << '\n';
	cout << "duration   =  " << typeid(clock::duration).name() << '\n';
	cout << "rep        =  " << typeid(clock::rep).name() << '\n';
	cout << "time_point =  " << typeid(clock::time_point).name() << '\n';
}

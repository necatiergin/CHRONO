#include <iostream>
#include <chrono>
#include <typeinfo>

int main()
{
	using namespace std::chrono;
	using std::cout;

	cout << typeid(system_clock::time_point).name() << '\n';
	cout << typeid(high_resolution_clock::time_point).name() << '\n';
	cout << typeid(steady_clock::time_point).name() << '\n';
}

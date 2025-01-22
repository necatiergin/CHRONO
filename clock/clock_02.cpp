#include <iostream>
#include <chrono>
#include <typeinfo>

int main()
{
	using namespace std::chrono;

	std::cout << typeid(system_clock::period).name() << '\n';
	std::cout << typeid(high_resolution_clock::period).name() << '\n';
	std::cout << typeid(steady_clock::period).name() << '\n';
}

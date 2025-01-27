#include <iostream>
#include <chrono>
#include <typeinfo>

int main()
{
	using std::cout;
	using namespace std::chrono;

	cout << typeid(system_clock::period).name() << '\n';
	cout << typeid(high_resolution_clock::period).name() << '\n';
	cout << typeid(steady_clock::period).name() << '\n';
}

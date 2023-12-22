#include <iostream>
#include <chrono>
#include <typeinfo>

using namespace std;
using namespace chrono;

int main()
{
	cout << typeid(system_clock::time_point).name() << '\n';
	cout << typeid(high_resolution_clock::time_point).name() << '\n';
	cout << typeid(steady_clock::time_point).name() << '\n';
}

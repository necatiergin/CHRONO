#include <iostream>
#include <chrono>
#include <typeinfo>

using namespace std;
using namespace chrono;

int main()
{
	cout << typeid(system_clock::period).name() << '\n';
	cout << typeid(high_resolution_clock::period).name() << '\n';
	cout << typeid(steady_clock::period).name() << '\n';
}

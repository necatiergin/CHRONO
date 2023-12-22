#include <iostream>
#include <chrono>
#include <typeinfo>

using namespace std;
using namespace chrono;

int main()
{
	cout << typeid(system_clock::rep).name() << '\n';
	cout << typeid(high_resolution_clock::rep).name() << '\n';
	cout << typeid(steady_clock::rep).name() << '\n';
}

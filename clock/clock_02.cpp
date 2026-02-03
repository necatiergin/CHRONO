#include <iostream>
#include <chrono>
#include <typeinfo>

int main()
{
	std::cout << typeid(std::chrono::system_clock::period).name() << '\n';
	std::cout << typeid(std::chrono::high_resolution_clock::period).name() << '\n';
	std::cout << typeid(std::chrono::steady_clock::period).name() << '\n';
}

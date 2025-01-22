#include <iostream>
#include <chrono>

int main()
{
	using namespace std::literals;
	using dsec = std::chrono::duration<double>;

	boolalpha(std::cout);
	std::cout << (543ms == 543000us) << '\n';
	std::cout << (543ms < 543001us) << '\n';
	std::cout << (1s > dsec{ 0.999 }) << '\n';
	std::cout << (dsec{ 0.5 } < 543ms) << '\n';
}

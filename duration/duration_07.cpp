#include <iostream>
#include <chrono>

long long fib(unsigned n)
{
	return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
	using namespace std::chrono;

	unsigned n;

	std::cout << "enter an integer : ";
	std::cin >> n;
	auto start = steady_clock::now();
	auto val = fib(n);
	auto end = steady_clock::now();
	std::cout << "fib(" << n << ") = " << val << "\n";
	std::cout << "sure : " << duration<double>{end - start}.count() << " seconds\n";
}

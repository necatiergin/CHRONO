#include <iostream>
#include <chrono>

long long fib(unsigned n)
{
	return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
	using namespace std;
	using namespace chrono;

	unsigned n;

	cout << "enter an integer : ";
	cin >> n;
	auto start = steady_clock::now();
	auto val = fib(n);
	auto end = steady_clock::now();
	cout << "fib(" << n << ") = " << val << "\n";
	cout << "sure : " << duration<double>{end - start}.count() << " saniye\n";
}

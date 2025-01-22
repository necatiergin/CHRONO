#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

std::vector<int> spend_time(std::size_t n)
{
	std::vector<int> ivec(n);
	generate(begin(ivec), end(ivec), std::rand); // adl
	sort(begin(ivec), end(ivec)); //adl

	return ivec;
}

int main()
{
	using namespace std;
	using namespace std::chrono;


	auto tp_start = steady_clock::now();
	auto x = spend_time(30'000);
	auto tp_end = steady_clock::now();

	cout << nanoseconds{ tp_end - tp_start }.count() << " nanoseconds\n";
	cout << duration_cast<microseconds>(tp_end - tp_start).count() << " microseconds\n";
	cout << duration_cast<milliseconds>(tp_end - tp_start).count() << " milliseconds\n";
}

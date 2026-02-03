#include <chrono>
#include <vector>
#include <random>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std::chrono;
	
	constexpr size_t size{ 1'000'000 };
	std::vector<int> ivec(size);

	std::mt19937 eng;
	std::uniform_int_distribution dist{ 0, 1'000'000 };

	const auto tp_start = steady_clock::now();

	generate(ivec.begin(), ivec.end(), [&] {return dist(eng); });
	sort(ivec.begin(), ivec.end());

	const auto tp_end = steady_clock::now();
	std::cout << "islem sona erdi\n";

	std::cout << "sure : " << duration_cast<milliseconds>(tp_end - tp_start).count() << " milliseconds\n";
	std::cout << "sure : " << duration<double>(tp_end - tp_start).count() << " seconds\n";
}

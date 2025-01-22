#include <chrono>
#include <vector>
#include <random>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;
	using namespace chrono;
	constexpr size_t size{ 1'000'000 };
	vector<int> ivec(size);

	mt19937 eng;
	uniform_int_distribution dist{ 0, 1'000'000 };

	const auto tp_start = steady_clock::now();

	generate(ivec.begin(), ivec.end(), [&] {return dist(eng); });
	sort(ivec.begin(), ivec.end());

	const auto tp_end = steady_clock::now();
	cout << "islem sona erdi\n";

	cout << "sure : " << duration_cast<milliseconds>(tp_end - tp_start).count() << " milliseconds\n";
	cout << "sure : " << duration<double>(tp_end - tp_start).count() << " seconds\n";
}

#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

using namespace std;
using namespace chrono;

vector<int> spend_time(size_t n)
{
	vector<int> ivec(n);
	generate(begin(ivec), end(ivec), rand);
	sort(begin(ivec), end(ivec));

	return ivec;
}

int main()
{
	auto tp_start = steady_clock::now();
	auto x = spend_time(30'000);
	auto tp_end = steady_clock::now();

	cout << nanoseconds{ tp_end - tp_start }.count() << " nanosaniye\n";
	cout << duration_cast<microseconds>(tp_end - tp_start).count() << " mikrosaniye\n";
	cout << duration_cast<milliseconds>(tp_end - tp_start).count() << " milisaniye\n";
}

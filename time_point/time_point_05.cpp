#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	auto tp = system_clock::now();

	cout << tp.time_since_epoch().count() << '\n';
	using Days = duration<int, ratio<24 * 60 * 60>>;
	cout << duration_cast<Days>(tp.time_since_epoch()).count() << '\n';
}

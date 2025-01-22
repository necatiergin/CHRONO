#include <iostream>
#include <chrono>

int main()
{
	using namespace std;
	using namespace chrono;
	
	auto tp = system_clock::now();

	cout << tp.time_since_epoch().count() << '\n';
	using Days = duration<int, ratio<24 * 60 * 60>>;
	cout << duration_cast<Days>(tp.time_since_epoch()).count() << '\n';
}

#include <chrono>
#include <iostream>

using dsec = std::chrono::duration<double>;

constexpr dsec operator""_dsec(long double sec)
{
	return dsec(static_cast<double>(sec));
}

int main()
{
	using namespace std;

	cout << 34.645_dsec;
}

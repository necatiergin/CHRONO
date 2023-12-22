#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	using dsec = duration<double>;

	cout << boolalpha;
	cout << (543ms == 543000us) << '\n';
	cout << (543ms < 543001us) << '\n';
	cout << (1s > dsec{ 0.999 }) << '\n';
	cout << (dsec{ 0.5 } < 543ms) << '\n';
}

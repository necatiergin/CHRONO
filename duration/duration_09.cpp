#include <chrono>
#include <iostream>

template<typename R, typename P>
std::ostream& operator<<(std::ostream& os, const std::chrono::duration<R, P>& dur)
{
	return os << dur.count() << " * (" << P::num << " / " << P::den << ")";
}

using namespace std;
using namespace chrono;

using halfsec = std::chrono::duration<long long, std::ratio<1, 2>>;
using frame = std::chrono::duration<double, std::ratio<1, 10>>;

using Day = std::chrono::duration<int, std::ratio<60 * 60 * 24>>;

int main()
{
	halfsec x{ 128 };

	++x;
	++x;
	++x;

	cout << x.count() << '\n';
	cout << milliseconds{ x }.count() << '\n';
	cout << frame{ x }.count() << '\n';
	cout << duration_cast<Day>(x).count() << '\n';
	cout << x << '\n' << milliseconds{ x } << '\n';
}

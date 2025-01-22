#include <chrono>
#include <iostream>

template<typename R, typename P>
std::ostream& operator<<(std::ostream& os, const std::chrono::duration<R, P>& dur)
{
	return os << dur.count() << " * (" << P::num << " / " << P::den << ")";
}

int main()
{
	using namespace std::chrono;

	using halfsec = duration<long long, std::ratio<1, 2>>;
	using frame = duration<double, std::ratio<1, 10>>;

	using Day = duration<int, std::ratio<60 * 60 * 24>>;

	halfsec x{ 128 };

	++x;
	++x;
	++x;

	std::cout << x.count() << '\n';
	std::cout << milliseconds{ x }.count() << '\n';
	std::cout << frame{ x }.count() << '\n';
	std::cout << duration_cast<Day>(x).count() << '\n';
	std::cout << x << '\n' << milliseconds{ x } << '\n';
}

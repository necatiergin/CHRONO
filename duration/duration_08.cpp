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
	using tensec = duration<long long, std::deca>;
	using frame = duration<double, std::ratio<1, 10>>;
	using Day = duration<int, std::ratio<60 * 60 * 24>>;

	std::cout << 45s << '\n';
	std::cout << 12ms << '\n';
	std::cout << 45us << '\n';
	std::cout << 45ns << '\n';

	std::cout << halfsec{ 128 } << '\n';
	std::cout << tensec{ 5 } << '\n';
	std::cout << frame{ 3.61 } << '\n';
	std::cout << Day{ 5 } << '\n';
}

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
using tensec = std::chrono::duration<long long, std::deca>;
using frame = std::chrono::duration<double, std::ratio<1, 10>>;
using Day = std::chrono::duration<int, std::ratio<60 * 60 * 24>>;

int main()
{
	cout << 45s << '\n';
	cout << 12ms << '\n';
	cout << 45us << '\n';
	cout << 45ns << '\n';

	cout << halfsec{ 128 } << '\n';
	cout << tensec{ 5 } << '\n';
	cout << frame{ 3.61 } << '\n';
	cout << Day{ 5 } << '\n';
}

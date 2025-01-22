#include <chrono>
#include <iostream>

int main()
{
	using namespace std;
	using namespace chrono;

	using dsec = duration<double>;
	microseconds us{ 7654777 };
	nanoseconds nx = us;  // conversion from a coarser type to a finer type

	//milliseconds msx = us;  // invalid - there is no conversion from finer types to coarser types
	milliseconds msx = duration_cast<milliseconds>(us);
	cout << msx.count() << '\n';
	msx = ceil<milliseconds>(us);
	cout << msx.count() << '\n';
	msx = floor<milliseconds>(us);
	msx = round<milliseconds>(us);
	cout << msx.count() << '\n';
	dsec ds = us;
	cout << ds.count() << '\n';
}

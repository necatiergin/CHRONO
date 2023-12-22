#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;

using dsec = duration<double>;

int main()
{
	microseconds us{ 7654777 };
	nanoseconds nx = us;  //daha kaba (coarse) türden daha ince türe örtülü dönüşüm

	//milliseconds msx = us;  //gecersiz daha kaba türe otomatik dönüşüm yok
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

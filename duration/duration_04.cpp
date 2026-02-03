#include <iostream>
#include <chrono>

int main()
{
	using std::cout, std::cin;
	using namespace std::chrono;

	long long msec;

	cout << "enter the duration as milliseconds: ";
	cin >> msec;
	milliseconds ms{ msec };
	hours hrs{ duration_cast<hours>(ms) };
	minutes mins{ duration_cast<minutes> (ms % 1h) };
	seconds sec{ duration_cast<seconds>(ms % 1min) };
	milliseconds msx(ms % 1s);

	if (hrs.count())
		cout << hrs.count() << " hours ";

	if (mins.count())
		cout << mins.count() << " minutes ";

	if (sec.count())
		cout << sec.count() << " seconds ";

	if (msx.count())
		cout << msx.count() << " milliseconds\n";
}

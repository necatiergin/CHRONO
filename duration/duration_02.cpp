#include <chrono>
#include <iostream>

int main()
{
	using namespace std::chrono;

	//seconds s1 = 345; //invalid
	seconds s2(345);														 
	std::cout << "s2.count() = " << s2.count() << '\n';
	seconds s3{ 761 };
	std::cout << "s3.count() = " << s3.count() << '\n';
	seconds s4{};
	std::cout << "s4.count() = " << s4.count() << '\n';
	//seconds s5;
	//std::cout << "s5.count() = " << s5.count() << '\n'; //ub
	seconds s6 = 675s;
	std::cout << "s6.count() = " << s6.count() << '\n'; 
}

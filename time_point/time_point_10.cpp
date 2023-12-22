#include <chrono>
#include <iostream>
#include <type_traits>

int main()
{
	using xtype = std::chrono::system_clock::time_point;
	using ytype = std::chrono::time_point< std::chrono::system_clock>;

	constexpr auto b = std::is_same_v<xtype, ytype>;  //true
}

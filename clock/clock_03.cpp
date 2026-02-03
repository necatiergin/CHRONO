#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

int main()
{
    using namespace std::chrono;

    system_clock::time_point now = system_clock::now();
    minutes offset{ 113000 };
    // past and future
    system_clock::time_point past = now - offset;
    system_clock::time_point future = now + offset;

    std::time_t now_tt = system_clock::to_time_t(now);
    std::time_t past_tt = system_clock::to_time_t(past);
    std::time_t future_tt = system_clock::to_time_t(future);

    std::cout << "Now     : " << std::put_time(localtime(&now_tt), "%Y-%m-%d %H:%M:%S") << '\n';
    std::cout << "Past    : " << std::put_time(localtime(&past_tt), "%Y-%m-%d %H:%M:%S") << '\n';
    std::cout << "Future  : " << std::put_time(localtime(&future_tt), "%Y-%m-%d %H:%M:%S") << '\n';
}

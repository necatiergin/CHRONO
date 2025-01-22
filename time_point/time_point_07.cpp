// quoted from cppreference.com

#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>

int main()
{
    //std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    auto now = std::chrono::system_clock::now();

    std::time_t now_c = std::chrono::system_clock::to_time_t(now - std::chrono::hours(24));
    std::cout << "One day ago, the time was "
        << std::put_time(std::localtime(&now_c), "%F %T") << '\n';
}

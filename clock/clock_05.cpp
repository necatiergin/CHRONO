#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

int main()
{
    using namespace std::chrono;

    auto old_time = time(nullptr);

    std::this_thread::sleep_for(3800ms);

    auto new_time = system_clock::to_time_t(system_clock::now());

    std::cout << "new_time - old_time == " << new_time - old_time << " s\n";
}

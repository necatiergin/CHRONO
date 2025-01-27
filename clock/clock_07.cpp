#include <chrono>
#include <iostream>

int main()
{
    //const auto tp_now = std::chrono::system_clock::tp_now();
    //const std::chrono::system_clock::time_point tp_now = std::chrono::system_clock::now();
    
    const std::chrono::time_point<std::chrono::system_clock> tp_now = 
        std::chrono::system_clock::now();
    
    const std::time_t sec = std::chrono::system_clock::to_time_t(tp_now);
    std::cout << "system clock time: " << std::ctime(&sec);
}

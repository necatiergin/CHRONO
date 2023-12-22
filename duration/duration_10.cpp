#include <iostream>
#include <chrono>

int main()
{
    using namespace std::chrono;

    std::cout << seconds::min().count() << '\n';
    std::cout << seconds::max().count() << '\n';
}

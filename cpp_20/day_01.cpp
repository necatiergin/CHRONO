#include <iostream>
#include <chrono>

int main()
{
    using namespace std;
    using namespace chrono;

    std::chrono::day myday{ 24};
    std::cout << static_cast<unsigned>(myday) << '\n';
    std::cout << myday << '\n';
    cout << (myday.ok() ? "valid" : "invalid") << " day\n";
    myday = day{ 35 };
    cout << (myday.ok() ? "valid" : "invalid") << " day\n";
}

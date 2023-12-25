#include <iostream>
#include <chrono>

int main()
{
    using namespace std;
    using namespace chrono;

    hh_mm_ss<milliseconds> x{ 7834324ms };

    cout << x << '\n';
}

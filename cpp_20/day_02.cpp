#include <iostream>
#include <chrono>

int main()
{
    using namespace std;
    using namespace chrono;

    for (day d{ 1 }; d.ok(); ++d)
        cout << d << ' ';
}

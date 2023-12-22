#include <iostream>
#include <iomanip>
#include <chrono>

std::ostream& print_duration(std::ostream& os, std::chrono::nanoseconds ns)
{
    using namespace std;
    using namespace std::chrono;
    using Days = duration<int, ratio<24 * 60 * 60>>;
    auto d = duration_cast<days>(ns);
    ns -= d;
    auto h = duration_cast<hours>(ns);
    ns -= h;
    auto m = duration_cast<minutes>(ns);
    ns -= m;
    auto s = duration_cast<seconds>(ns);
    auto fill_ch = os.fill('0');
    os << setw(2) << d.count() << "d:"
        << setw(2) << h.count() << "h:"
        << setw(2) << m.count() << "m:"
        << setw(2) << s.count() << 's';
    os.fill(fill_ch);
    return os;
};

int main()
{
    using namespace std::literals;

    print_duration(std::cout, 161823487349871ns);
}

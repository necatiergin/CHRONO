//https://stackoverflow.com/questions/14391327/how-to-get-duration-as-int-millis-and-float-seconds-from-chrono

#include <chrono>
#include <iostream>

int main()
{
    using Time = std::chrono::high_resolution_clock;
    using ms = std::chrono::milliseconds;
    using fsec = std::chrono::duration<float>;
    auto t0 = Time::now();
    (void)getchar();
    auto t1 = Time::now();

    fsec fs = t1 - t0;
    ms d = std::chrono::duration_cast<ms>(fs);
    std::cout << fs.count() << "s\n";
    std::cout << d.count() << "ms\n";
}

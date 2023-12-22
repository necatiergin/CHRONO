#include <iostream>
#include <chrono>

template <typename Rep, typename Period>
void f1(std::chrono::duration<Rep, Period>);

void f2(std::chrono::nanoseconds);

void f3(std::chrono::duration<double>);

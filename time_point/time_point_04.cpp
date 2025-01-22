#include <chrono>
#include <random>

int main()
{
	using namespace std::chrono;
	std::mt19937 eng(static_cast<unsigned>(duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count()));
	//...
}

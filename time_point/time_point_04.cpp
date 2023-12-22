#include <chrono>
#include <random>

using namespace std;
using namespace chrono;

int main()
{
	mt19937 eng(static_cast<unsigned>(duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count()));
        //...
}

#include "StopWatch.h"


void StopWatch::start ()
{
    m_start = std::chrono::steady_clock::now();
}

void StopWatch::stop ()
{
    m_stop = std::chrono::steady_clock::now();
}

void StopWatch::print()
{
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(m_stop - m_start);

	std::cout << elapsed.count() << std::endl;
}

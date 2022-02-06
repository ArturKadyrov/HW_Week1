#ifndef STOPWATCH_H_INCLUDED
#define STOPWATCH_H_INCLUDED

#include <iostream>
#include <chrono>

class StopWatch
{
public:

    void start();
    void stop();
    void print();

private:

    std::chrono::steady_clock::time_point m_start;
    std::chrono::steady_clock::time_point m_stop;
};

#endif // STOPWATCH_H_INCLUDED

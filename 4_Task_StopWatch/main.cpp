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


int main()
{
    using namespace std;

    StopWatch T1;
    T1.start();
    //
        int N = 10000;

        for (int i = 0 ; i<N; i++)
        {
            for (int j=0 ; j<N;j++)
            {

            }
        }

    //
    T1.stop();
    T1.print();

    return 0;
}

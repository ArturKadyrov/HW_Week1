#include <iostream>

#include "StopWatch.h"


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
        T1.pause();

        T1.resume();

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

#include <iostream>

int f (int x)
{
    return x*x+x*3+9;
}

int main()
{
    using namespace std;

    cout<<f(5);
    return 0;
}

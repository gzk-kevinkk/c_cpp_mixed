#include <iostream>
extern "C"
{ // Compile in c mode
    int add(int a, int b)
    {
        std::cout << "a + b = " << a + b << std::endl;
        return 0;
    }
}
#include <iostream>

template <typename T>
inline T SQUARE(T num)
{
    return num * num;
}
int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(3.12)<<std::endl;
}